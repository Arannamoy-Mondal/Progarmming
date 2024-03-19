/*
Queue<Long> queue=new LinkedList<Long>();
int index=0;
while(index<K)
{
    if(A[index]<K)
    {
        queue.offer(A[index]);
    }
    index++;
}
long res[]=new long[N-K+1];
res[0]=(queue.isEmpty())?0:queue.peek();
for(int i=1;i<N-K+1;i++)
{
    if(A[i-1]<0)
    {
        queue.poll();
    }
    if(A[i+K-1])
    {
        queue.offer(A[i+K-1]);
    }
    res[i]=(queue.isEmty())?0:queue.peek();
}
*/