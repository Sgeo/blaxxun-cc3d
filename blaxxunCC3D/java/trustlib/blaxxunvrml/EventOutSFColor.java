//
// Auto-generated using JActiveX.EXE 5.00.2924
//   (d:\sdkj31\bin\jactivex /javatlb /d d:\java blaxxunvrml.tlb)
//
// WARNING: Do not remove the comments that include "@com" directives.
// This source file must be compiled by a @com-aware compiler.
// If you are using the Microsoft Visual J++ compiler, you must use
// version 1.02.3920 or later. Previous versions will not issue an error
// but will not generate COM-enabled class files.
//

package blaxxunvrml;

import com.ms.com.*;
import com.ms.com.IUnknown;
import com.ms.com.Variant;

// Dual interface EventOutSFColor
/** @com.interface(iid=BAC5043D-75D9-11D0-9315-0020AFE05CC8, thread=AUTO, type=DUAL) */
public interface EventOutSFColor extends blaxxunvrml.EventOut
{
  /** @com.method(vtoffset=4, dispid=1610743808, type=METHOD, name="getType")
      @com.parameters([type=I4] return) */
  public int getType();

  /** @com.method(vtoffset=5, dispid=1610743809, type=METHOD, name="advise")
      @com.parameters([in,iid=BAC50406-75D9-11D0-9315-0020AFE05CC8,thread=AUTO,type=DISPATCH] observer, [in,iid=00020400-0000-0000-C000-000000000046,thread=AUTO,type=DISPATCH] userData) */
  public void advise(blaxxunvrml.EventOutObserver observer, Object userData);

  /** @com.method(vtoffset=6, dispid=1610743810, type=METHOD, name="unAdvise")
      @com.parameters([in,iid=BAC50406-75D9-11D0-9315-0020AFE05CC8,thread=AUTO,type=DISPATCH] observer) */
  public void unAdvise(blaxxunvrml.EventOutObserver observer);

  // toString UNMAPPABLE: Name is a keyword or conflicts with another member.
  //  public String toString();

  /** @com.method(vtoffset=8, dispid=1610809344, type=METHOD, name="getValue")
      @com.parameters([in,out,size=1,elementType=R4,type=ARRAY] value) */
  public void getValue(float[] value);


  public static final com.ms.com._Guid iid = new com.ms.com._Guid((int)0xbac5043d, (short)0x75d9, (short)0x11d0, (byte)0x93, (byte)0x15, (byte)0x0, (byte)0x20, (byte)0xaf, (byte)0xe0, (byte)0x5c, (byte)0xc8);
}
