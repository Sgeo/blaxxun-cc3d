/* ----   file information  -------------------------------------------------
   Revison:     $Revision: 1.4 $
   Date:        $Date: 1999/03/18 10:29:00 $
   Modification History:
   $Log: EventOutMFVec2f.java,v $
   Revision 1.4  1999/03/18 10:29:00  kristof
   *** empty log message ***

   Revision 1.3  1998/03/17 14:05:25  holger
   empty message

   Revision 1.2  1997/12/10 10:35:08  kristof
   *** empty log message ***

   Revision 1.1  1997/12/02 12:10:38  kristof
   Initial revision

   ----   file information  ---------------------------------------------- */

// package
package vrml.external.field;

// imports

public class EventOutMFVec2f extends EventOutMField
{
    // constructor
    protected EventOutMFVec2f (int type, int cb, int ce)
    {
        super (type, cb, ce);
    }

    // get value
    public float[][] getValue ()
    {
        float [][] v;
        int size;
        int i;

        // allocate array
        size = getSize();
        v = new float[size][2];

        for (i = 0; i < size; i ++)
        {
             getFloat(i,v[i]);
        }

        return v;
    }

    public float[]  get1Value(int index)
    {
        float [] v;
        v = new float[2];
        getFloat(index,v);
        return v;
    }
}
