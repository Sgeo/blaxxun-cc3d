/* ----   file information  -------------------------------------------------
   Revison:     $Revision: 1.3 $
   Date:        $Date: 1998/03/17 14:05:20 $
   Modification History:
   $Log: EventInSFFloat.java,v $
   Revision 1.3  1998/03/17 14:05:20  holger
   empty message

   Revision 1.2  1997/12/10 10:34:54  kristof
   *** empty log message ***

   Revision 1.1  1997/12/02 12:10:27  kristof
   Initial revision

   ----   file information  ---------------------------------------------- */

// package
package vrml.external.field;

public class EventInSFFloat extends EventIn
{
    // constructor
    protected EventInSFFloat (int type, int cb, int ce)
    {
        super (type, cb, ce);
    }

    // set value
    public void setValue (float value)
    {
        setFloat (0, value);
    }
}
