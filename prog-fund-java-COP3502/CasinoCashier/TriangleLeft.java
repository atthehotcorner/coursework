class TriangleLeft
{
	private char pattern;
	private int length;

	public TriangleLeft()
	{
		pattern='#';
		length=5;
	}
	public TriangleLeft(char p,int l)
	{
		pattern=p;
		length=l;
	}
	public void printTriangleLeft()
	{
		for(int i=0;i<length;i++)
		{
			for(int j=0;j<length;j++)
			{
				if((j==0) || (i==j) || i==length-1)
				{
					System.out.print(pattern);
				}
				else
				{
					System.out.print(" ");
				}
			}
			System.out.println();
		}
	}
}
