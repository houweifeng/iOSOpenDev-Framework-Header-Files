/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>

@class NSArray, NSMutableArray;

@interface IUActionRowDataSource : XXUnknownSuperclass {
	NSMutableArray *_rows;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *actionRows;	// G=0x39151; 
@property(readonly, assign, nonatomic) unsigned count;	// G=0x391c9; 
- (unsigned)removeActionRowWithTag:(int)tag;	// 0x393b9
- (void)insertActionRow:(id)row atIndex:(unsigned)index;	// 0x392fd
- (unsigned)indexOfActionRowWithTag:(int)tag;	// 0x39209
- (void)enumerateActionRowsUsingBlock:(id)block;	// 0x391e9
// declared property getter: - (unsigned)count;	// 0x391c9
- (void)addActionRow:(id)row;	// 0x39189
// declared property getter: - (id)actionRows;	// 0x39151
- (id)actionRowAtIndex:(unsigned)index;	// 0x39131
- (void)dealloc;	// 0x390dd
@end
