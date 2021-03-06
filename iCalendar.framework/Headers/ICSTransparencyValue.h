/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <iCalendar/ICSTransparencyValue.h>
#import <iCalendar/ICSPredefinedValue.h>


@interface ICSTransparencyValue : ICSPredefinedValue {
}
+ (id)transparencyTypeFromCode:(int)code;	// 0xa28d
@end

@interface ICSTransparencyValue (ICSWriter)
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0xd2bd
@end

@interface ICSTransparencyValue (iCalendarImport)
+ (id)transparencyValueFromICSString:(id)icsstring;	// 0x1e1d9
@end
