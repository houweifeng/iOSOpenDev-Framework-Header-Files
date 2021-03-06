/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/ICCameraFolder.h>


@interface MSCameraFolder : ICCameraFolder {
@private
	void *_msCameraFolderProperties;	// 12 = 0xc
}
@property(readonly, assign) long long fsSize;	// G=0x11f39; 
@property(readonly, assign) timespec fsModificationTime;	// G=0x11f21; 
@property(readonly, assign) timespec fsCreationTime;	// G=0x11f09; 
@property(readonly, assign) unsigned long long fsSN;	// G=0x11ef5; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device fsSN:(unsigned long long)sn fsCreationTime:(timespec)time fsModificationTime:(timespec)time6 fsSize:(long long)size fsFlags:(unsigned)flags;	// 0x12135
- (void)dealloc;	// 0x12f85
- (void)finalize;	// 0x12f3d
// declared property getter: - (unsigned long long)fsSN;	// 0x11ef5
// declared property getter: - (timespec)fsCreationTime;	// 0x11f09
// declared property getter: - (timespec)fsModificationTime;	// 0x11f21
// declared property getter: - (long long)fsSize;	// 0x11f39
- (void)enumerateContent;	// 0x12671
- (BOOL)deleteItemFromCamera:(id)camera;	// 0x12539
- (id)itemMatchingName:(id)name fsSN:(unsigned long long)sn fsCreationTime:(timespec *)time fsSize:(long long)size;	// 0x122b5
- (id)folderMatchingPath:(id)path;	// 0x121bd
@end
