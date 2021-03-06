/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/PLAlbumViewDataSource.h>
#import <PhotoLibrary/PLAlbumViewDelegate.h>
#import <PhotoLibrary/PLCameraImporterDelegate.h>

@class PLImageTable, PLImportSessionInfo, PLEmptyAlbumView, UIAlertView, NSTimer, NSMutableArray, UIBarButtonItem, PLCameraImporter;

@interface PLImportViewController : XXUnknownSuperclass <PLCameraImporterDelegate, PLAlbumViewDataSource, PLAlbumViewDelegate> {
	PLCameraImporter *_importer;	// 152 = 0x98
	PLEmptyAlbumView *_emptyAlbumView;	// 156 = 0x9c
@private
	BOOL _readingImportItems;	// 160 = 0xa0
	PLImageTable *_thumbStorage;	// 164 = 0xa4
	unsigned _lastUsedThumbEntry;	// 168 = 0xa8
	NSMutableArray *_importItemThumbEntries;	// 172 = 0xac
	PLImportSessionInfo *_importSessionInfo;	// 176 = 0xb0
	CFUserNotificationRef _importCompleteNotification;	// 180 = 0xb4
	UIAlertView *_notEnoughSpaceAlert;	// 184 = 0xb8
	UIAlertView *_confirmDupsAlert;	// 188 = 0xbc
	NSTimer *_deletedItemsTimer;	// 192 = 0xc0
	NSTimer *_icSleepPreventionTimer;	// 196 = 0xc4
	UIBarButtonItem *_importAllBarButton;	// 200 = 0xc8
	UIBarButtonItem *_importSelectedBarButton;	// 204 = 0xcc
	UIBarButtonItem *_stopImportBarButton;	// 208 = 0xd0
	unsigned _busyCount;	// 212 = 0xd4
	unsigned _imageCount;	// 216 = 0xd8
	unsigned _videoCount;	// 220 = 0xdc
	unsigned _otherCount;	// 224 = 0xe0
}
@property(retain, nonatomic) PLCameraImporter *importer;	// G=0xb26ed; S=0xb26fd; @synthesize=_importer
@property(retain) id importDevice;	// G=0xb0239; S=0xb02f5; converted property
// declared property setter: - (void)setImporter:(id)importer;	// 0xb26fd
// declared property getter: - (id)importer;	// 0xb26ed
- (void)albumViewSelectionDidChange:(id)albumViewSelection added:(id)added removed:(id)removed;	// 0xb26dd
- (id)albumView:(id)view textBadgeForPhotoAtIndex:(unsigned)index;	// 0xb2689
- (void)albumView:(id)view imageCount:(unsigned *)count videoCount:(unsigned *)count3 otherCount:(unsigned *)count4 pendingCount:(unsigned *)count5 importOperation:(int *)operation;	// 0xb262d
- (id)albumView:(id)view imageDataForPhotoAtIndex:(unsigned)index imageWidth:(int *)width imageHeight:(int *)height bytesPerRow:(int *)row dataWidth:(int *)width6 dataHeight:(int *)height7 imageDataOffset:(int *)offset;	// 0xb2569
- (unsigned)numberOfPhotosForAlbumView:(id)albumView;	// 0xb2531
- (void)importer:(id)importer didCompleteRemovalOfItems:(id)items;	// 0xb2521
- (void)importer:(id)importer didCompleteImportForItems:(id)items;	// 0xb1fe5
- (void)importer:(id)importer didImportItem:(id)item error:(id)error;	// 0xb1e55
- (void)importer:(id)importer didCopyOriginalForItem:(id)item error:(id)error;	// 0xb1e51
- (void)importer:(id)importer didChangeImportItem:(id)item changeType:(int)type error:(id)error;	// 0xb1d0d
- (void)importerDidFinishReadingImportItems:(id)importer error:(id)error;	// 0xb1c3d
- (void)importer:(id)importer didRemoveImportItem:(id)item atIndex:(unsigned)index;	// 0xb1ae9
- (void)importer:(id)importer didAddImportItem:(id)item atIndex:(unsigned)index;	// 0xb1895
- (void)stopImport;	// 0xb1801
- (void)importSelected;	// 0xb17c1
- (void)importAll;	// 0xb13ad
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0xb1239
- (void)_checkDiskSpaceForImportIndexes:(id)importIndexes;	// 0xb0b59
- (void)_beginImportSession;	// 0xb0905
- (void)_endImport;	// 0xb07ed
- (void)_beginImportForItemAtIndex:(unsigned)index;	// 0xb0639
- (void)handleImportCompleteAlertResponse:(CFUserNotificationRef)response flags:(unsigned long)flags;	// 0xb057d
- (void)_deleteItems:(id)items;	// 0xb0529
// converted property setter: - (void)setImportDevice:(id)device;	// 0xb02f5
- (void)_cancelAlerts;	// 0xb0261
// converted property getter: - (id)importDevice;	// 0xb0239
- (BOOL)isImporting;	// 0xb0205
- (BOOL)isBusy;	// 0xb01ed
- (void)dealloc;	// 0xb0095
- (void)viewWillAppear:(BOOL)view;	// 0xaffb5
- (id)contentScrollView;	// 0xaff8d
- (void)viewDidUnload;	// 0xaff89
- (void)didReceiveMemoryWarning;	// 0xaff5d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0xaff51
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0xaff31
- (void)loadView;	// 0xafe1d
- (id)init;	// 0xafd89
- (id)_deletableIndexesOfItemsAtIndexes:(id)indexes;	// 0xafc95
- (void)_setThumbnailEntryForImportItem:(id)importItem atImportItemIndex:(unsigned)importItemIndex;	// 0xaf9c5
- (CGImageRef)_newGenericThumbnailForImportItem:(id)importItem;	// 0xaf869
- (void)_resetThumbnailTracking;	// 0xaf6f9
- (id)_thumbnailPathString;	// 0xaf6c5
- (void)_addEmptyAlbumViewWithError:(id)error;	// 0xaf3dd
- (id)_textBadgeStringForCameraItem:(id)cameraItem;	// 0xaf189
- (void)_cleanUpAfterImport;	// 0xaf135
- (void)_endUninterruptibleOperation;	// 0xaf099
- (void)_photosDatabaseHasChanged:(id)changed;	// 0xaf015
- (void)_deletedItemsTimerFired:(id)fired;	// 0xaeef9
- (void)_resetDuplicateBadgesForceDatabaseCheck:(BOOL)check;	// 0xaee35
- (void)_beginUninterruptibleOperation;	// 0xaed69
- (void)_setupNavigationItem;	// 0xaea71
- (void)_icSleepPreventionTimerFired:(id)fired;	// 0xae9a9
- (id)_localizedCameraName;	// 0xae8f9
- (id)_localizedDeviceType;	// 0xae899
@end
