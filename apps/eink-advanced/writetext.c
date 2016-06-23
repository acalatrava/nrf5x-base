/*
static char alphabet[26] = "abcdefghijklmnopqrstuvwxyz ";

static char alphabetPixels[26][13] = {
    {0x0C, 0x0E, 0x0E, 0x0A, 0x0A, 0x1F, 0x1F, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, },//A
    {0x1E, 0x13, 0x12, 0x1F, 0x16, 0x12, 0x12, 0x1B, 0x0E, 0x00, 0x00, 0x00, 0x00, },//B
    {0x1E, 0x12, 0x03, 0x02, 0x01, 0x11, 0x13, 0x1E, 0x0C, 0x00, 0x00, 0x00, 0x00, },//C
    {0x1E, 0x33, 0x12, 0x22, 0x22, 0x22, 0x32, 0x17, 0x0E, 0x00, 0x00, 0x00, 0x00, },//D
    {0x3E, 0x02, 0x03, 0x1E, 0x06, 0x02, 0x02, 0x0A, 0x1E, 0x00, 0x00, 0x00, 0x00, },//E
    {0x3E, 0x02, 0x02, 0x1E, 0x16, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, },//F
    {0x1E, 0x1A, 0x01, 0x19, 0x11, 0x11, 0x13, 0x1E, 0x0C, 0x00, 0x00, 0x00, 0x00, },//G
    {0x02, 0x33, 0x22, 0x3F, 0x36, 0x33, 0x12, 0x22, 0x02, 0x00, 0x00, 0x00, 0x00, },//H
    {0x07, 0x03, 0x07, 0x03, 0x03, 0x07, 0x07, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, },//I
    {0x08, 0x18, 0x08, 0x18, 0x08, 0x09, 0x09, 0x0F, 0x06, 0x00, 0x00, 0x00, 0x00, },//J
    {0x12, 0x1B, 0x0A, 0x0F, 0x0F, 0x0A, 0x1B, 0x12, 0x22, 0x00, 0x00, 0x00, 0x00, },//K
    {0x02, 0x03, 0x02, 0x02, 0x02, 0x02, 0x03, 0x17, 0x1E, 0x00, 0x00, 0x00, 0x00, },//L
    {0x23, 0x33, 0x33, 0x77, 0x37, 0x3C, 0x2D, 0x2F, 0x08, 0x00, 0x00, 0x00, 0x00, },//M
    {0x23, 0x23, 0x27, 0x2E, 0x1A, 0x3A, 0x3B, 0x32, 0x20, 0x00, 0x00, 0x00, 0x00, },//N
    {0x1E, 0x1A, 0x13, 0x11, 0x11, 0x11, 0x13, 0x1E, 0x0C, 0x00, 0x00, 0x00, 0x00, },//O
    {0x1E, 0x12, 0x33, 0x12, 0x1E, 0x06, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, },//P
    {0x1E, 0x33, 0x21, 0x21, 0x3F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },//Q
    {0x1E, 0x32, 0x23, 0x12, 0x1E, 0x16, 0x12, 0x22, 0x02, 0x00, 0x00, 0x00, 0x00, },//R
    {0x0E, 0x1A, 0x03, 0x06, 0x0C, 0x18, 0x11, 0x1B, 0x0C, 0x00, 0x00, 0x00, 0x00, },//S
    {0x3F, 0x0E, 0x04, 0x04, 0x0C, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, },//T
    {0x22, 0x33, 0x22, 0x23, 0x32, 0x33, 0x32, 0x1E, 0x0C, 0x00, 0x00, 0x00, 0x00, },//U
    {0x31, 0x13, 0x13, 0x0A, 0x0E, 0x0E, 0x0C, 0x0C, 0x04, 0x00, 0x00, 0x00, 0x00, },//V
    {0x3D, 0x25, 0x1F, 0x1F, 0x1F, 0x1E, 0x1A, 0x1B, 0x02, 0x00, 0x00, 0x00, 0x00, },//W
    {0x13, 0x1A, 0x0E, 0x0C, 0x0C, 0x0E, 0x0A, 0x1B, 0x10, 0x00, 0x00, 0x00, 0x00, },//X
    {0x13, 0x1A, 0x0A, 0x0E, 0x0E, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, },//Y
    {0x3F, 0x10, 0x08, 0x0C, 0x04, 0x06, 0x02, 0x0F, 0x1F, 0x00, 0x00, 0x00, 0x00, },//Z
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },//SPACE
};

void writeText(char text[])
{
    int numberOfCharacters = sizeof(text)/sizeof(text[0]);

    //loop over each character to be written
    for(int i = 0; i < numberOfCharacters; i++)
    {
        char find = text[i];

        //find which array of pixels corresponds to that character
        const char *ptr = strchr(alphabet, find);
        if(ptr) {
            int index = ptr - alphabet;

            char characterBytes[7]; strcpy(characterBytes, alphabetPixels[index]);

            //write each row of the character pixels into the picture
            for(int j = 0; j < sizeof(characterBytes)/sizeof(characterBytes[0]); j++)
            {
                int index = (i) + (50 * j);
                lab11[index] = characterBytes[j];
            }
        }
    }
}

void writeText(char text[])
{
    int numberOfCharacters = strlen(text);
    //uint8_t offset = 0;//used to prevent word wrapping

    //loop over each character to be written
    for(int i = 0; i < numberOfCharacters; i++)
    {
        char find = text[i];//character to write
        char *bitmap = font8x8_basic[find];//bitmap of that character
        uint8_t line =  ((i) / 50);//which line to write it on

        //write each row of the character pixels into the picture
        for(int j = 0; j < 8; j++)
        {
            int index = (i) + (50 * j) + (line * 50 * 8);//index of screen to place it

            if(index < 15000)//make sure nothing is written beyond the array in memory
            {
                //each chunk of 8 pixels is written right to left, so we need to reverse it first
                screen[index] = reverse(bitmap[j]);
            }
        }
        
    }
}
*/