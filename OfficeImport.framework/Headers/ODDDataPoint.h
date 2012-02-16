/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODDPoint.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDDataPoint : ODDPoint {
@private
	NSMutableArray *mPresentations;	// 20 = 0x14
}
- (void)dealloc;	// 0x1d050d
- (id)presentations;	// 0x1cdecd
- (void)addPresentation:(id)presentation order:(unsigned long)order;	// 0x1ca29d
- (void)addAssociatedPresentation:(id)presentation;	// 0x1ca54d
@end