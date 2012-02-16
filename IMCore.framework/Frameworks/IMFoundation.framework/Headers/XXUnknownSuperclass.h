/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/XXUnknownSuperclass.h>

@class NSString, NSData;

@interface XXUnknownSuperclass (FezBundleHelpers)
- (id)_cachedMainBundleResourcePath;	// 0x169d
@end

@interface XXUnknownSuperclass (FezAdditions)
- (BOOL)isNull;	// 0x2209
@end

@interface XXUnknownSuperclass (FezAdditions)
- (id)localizedString;	// 0x69cd
@end

@interface XXUnknownSuperclass (FezAdditions)
+ (id)generatedRoomNameForGroupChat;	// 0x7551
+ (id)randomString;	// 0x74d1
+ (id)stringGUIDForObject:(id)object;	// 0x7479
+ (id)stringGUID;	// 0x7439
- (BOOL)roomNameIsProbablyAutomaticallyGenerated;	// 0x7af5
- (id)stringByRemovingCharactersFromSet:(id)set;	// 0x5cf1
- (id)pathStringForDisplay;	// 0x7a7d
- (id)stringByStrippingControlCharacters;	// 0x4869
- (id)uniqueSavePath;	// 0x79e9
- (id)stringByRemovingWhitespace;	// 0x3f61
- (NSRange)rangeOfNewlineInRange:(NSRange)range;	// 0x4269
- (id)commaSeparatedComponents;	// 0x790d
- (id)stringByResolvingAndStandardizingPath;	// 0x2841
- (BOOL)_appearsToBePhoneNumber;	// 0x7895
- (BOOL)_appearsToBeEmail;	// 0x7889
- (id)stringWithDefaultServerIfNeeded:(id)defaultServerIfNeeded;	// 0x7809
- (id)urlFromString;	// 0x7751
- (id)stringByAddingURLEscapes;	// 0x7711
- (id)stringByRemovingURLEscapes;	// 0x76d9
- (id)trimmedString;	// 0x42ed
- (BOOL)localizedHasPrefix:(id)prefix caseSensitive:(BOOL)sensitive;	// 0x7665
- (int)localizedCompareToString:(id)string;	// 0x4aa9
- (unsigned)unsignedIntValue;	// 0x763d
- (unsigned)hexValue;	// 0x75cd
- (BOOL)isDirectory;	// 0x6749
- (BOOL)isEqualToIgnoringCase:(id)ignoringCase;	// 0x638d
@end

@interface XXUnknownSuperclass (FezAdditions)
- (void)replaceNewlinesWithSpaces;	// 0x7b7d
@end

@interface XXUnknownSuperclass (FezAdditions)
- (id)trimmedString;	// 0x7c71
- (BOOL)attribute:(id)attribute existsInRange:(NSRange)range;	// 0x7c19
@end

@interface XXUnknownSuperclass (FezAdditions)
- (void)removeCharactersWithAttribute:(id)attribute;	// 0x7d1d
- (void)replaceAttribute:(id)attribute value:(id)value withValue:(id)value3;	// 0x4b09
- (void)replaceNewlinesWithSpaces;	// 0x418d
- (void)trimWhitespace;	// 0x6265
@end

@interface XXUnknownSuperclass (FezAdditions)
- (id)arrayByApplyingBlock:(id)block filter:(id)filter;	// 0x81e1
- (id)arrayByApplyingBlock:(id)block;	// 0x80c5
- (id)arrayByFilteringWithBlock:(id)block;	// 0x7fa1
- (id)arrayByFilteringOutBySelector:(SEL)selector withObject:(id)object;	// 0x7ee9
- (id)arrayByApplyingSelectorWithValues:(SEL)values toObject:(id)object;	// 0x7e21
- (BOOL)containsObject:(id)object matchingComparison:(SEL)comparison;	// 0x27ad
- (int)indexOfObject:(id)object matchingComparison:(SEL)comparison;	// 0x27d5
- (BOOL)containsObjectIdenticalTo:(id)to;	// 0x1711
- (id)firstObject;	// 0x7de9
- (id)_copyForEnumerating;	// 0x7d95
@end

@interface XXUnknownSuperclass (FezAdditions)
+ (id)nonRetainingSet;	// 0x8319
@end

@interface XXUnknownSuperclass (FezAdditions)
+ (id)nonRetainingArray;	// 0x1c31
- (id)removeFirstObject;	// 0x8375
@end

@interface XXUnknownSuperclass (FezAdditions)
+ (id)dictionaryWithArchiveData:(id)archiveData;	// 0x25bd
+ (id)dictionaryWithArchiveData:(id)archiveData allowedClasses:(id)classes;	// 0x25d1
+ (id)dictionaryWithPlistData:(id)plistData;	// 0x83cd
+ (id)_dictionaryWithData:(id)data isPlist:(BOOL)plist allowedClasses:(id)classes;	// 0x25f1
- (id)dictionaryFromChanges:(id)changes;	// 0x841d
- (id)archiveData;	// 0x24e1
- (id)plistData;	// 0x83ed
- (id)keysOfChangedEntriesComparedTo:(id)to;	// 0x2239
@end

@interface XXUnknownSuperclass (FezAdditions)
+ (id)dataWithRandomBytes:(unsigned)randomBytes;	// 0x866d
+ (id)dataWithHexString:(id)hexString;	// 0x857d
- (id)hexString;	// 0x63b9
- (id)hexStringOfBytes:(char *)bytes withLength:(int)length;	// 0x2b05
@end

@interface XXUnknownSuperclass (FezAdditions)
- (BOOL)copyItemAtPath:(id)path toPath:(id)path2 uniquePath:(id *)path3 error:(id *)error;	// 0x8ca1
- (BOOL)moveItemAtPath:(id)path toPath:(id)path2 uniquePath:(id *)path3 error:(id *)error;	// 0x8c75
- (BOOL)_moveItemAtPath:(id)path toPath:(id)path2 uniquePath:(id *)path3 error:(id *)error asCopy:(BOOL)copy;	// 0x8b81
- (id)createUniqueDirectoryWithName:(id)name atPath:(id)path ofType:(id)type;	// 0x8a89
- (id)uniqueFilename:(id)filename atPath:(id)path ofType:(id)type;	// 0x8919
- (BOOL)makeDirectoriesInPath:(id)path mode:(unsigned long)mode;	// 0x28c5
- (BOOL)_isPathOnMissingVolume:(id)volume;	// 0x299d
- (id)_randomTemporaryPathWithFileName:(id)fileName;	// 0x8875
- (id)_randomTemporaryPathWithSuffix:(id)suffix;	// 0x881d
- (id)_generateLinkForURL:(id)url;	// 0x8729
@end

@interface XXUnknownSuperclass (IMFoundation_Additions)
+ (id)nonRetainingKeyAndValueDictionary;	// 0x9595
+ (id)nonRetainingDictionary;	// 0x9505
@end

@interface XXUnknownSuperclass (FezAdditions)
+ (id)genericErrorWithFile:(const char *)file function:(const char *)function lineNumber:(int)number;	// 0x9631
@end

@interface XXUnknownSuperclass (DelayedPerformAdditions)
- (void)performSelector:(SEL)selector withObject:(id)object afterDelay:(double)delay ignoreMenuTracking:(BOOL)tracking;	// 0x9705
@end

@interface XXUnknownSuperclass (SpecificDomainAdditions)
+ (id)_IMObjectForKey:(id)key inDomain:(id)domain;	// 0x9841
+ (void)_IMSetObject:(id)object forKey:(id)key inDomain:(id)domain;	// 0x980d
+ (id)_IMAppObjectForKey:(id)key;	// 0x97c9
+ (id)_IMAgentObjectForKey:(id)key;	// 0x9715
@end

@interface XXUnknownSuperclass (DictionaryTypeChecking)
- (id)_dataForKey:(id)key;	// 0x9bc1
- (id)_stringForKey:(id)key;	// 0x9b6d
- (id)_numberForKey:(id)key;	// 0x9b19
- (id)_arrayForKey:(id)key;	// 0x9ac5
- (id)_dictionaryForKey:(id)key;	// 0x9a71
@end

@interface XXUnknownSuperclass (_IMThreadBlockSupport)
+ (void)_im_runBlock:(id)block;	// 0xa275
- (void)__im_performBlock:(id)block waitUntilDone:(BOOL)done;	// 0xa35d
- (void)__im_performBlock:(id)block;	// 0xa301
@end

@interface XXUnknownSuperclass (_IMSupportMessagingProxy)
- (id)__im_getInvocation:(id *)invocation;	// 0xa511
- (id)__im_afterDelay:(double)delay;	// 0xa4bd
- (id)__im_onThread:(id)thread;	// 0xa4a9
- (id)__im_onThread:(id)thread immediateForMatchingThread:(BOOL)matchingThread;	// 0xa455
- (id)__im_onDetachedThread;	// 0xa441
- (id)__im_onMainThreadIfNecessary;	// 0xa405
- (id)__im_onMainThread;	// 0xa3c9
@end

@interface XXUnknownSuperclass (HFSFileAttributes)
@property(readonly, assign, nonatomic) unsigned long long fileHFSResourceForkSize;	// G=0x6791; 
@property(readonly, assign, nonatomic) unsigned short fileHFSFlags;	// G=0xb0c1; 
// declared property getter: - (unsigned long long)fileHFSResourceForkSize;	// 0x6791
// declared property getter: - (unsigned short)fileHFSFlags;	// 0xb0c1
@end

@interface XXUnknownSuperclass (FezSecurityAdditions)
@property(readonly, assign, nonatomic) NSString *SHA1HexString;	// G=0x2aa1; 
@property(readonly, assign, nonatomic) NSData *SHA1Data;	// G=0xc0e9; 
// declared property getter: - (id)SHA1HexString;	// 0x2aa1
// declared property getter: - (id)SHA1Data;	// 0xc0e9
@end

@interface XXUnknownSuperclass (IMInvocationQueueAdditions)
- (BOOL)wantsReturnValue;	// 0xea81
@end

@interface XXUnknownSuperclass (MobileMeHelpers)
@property(readonly, assign, nonatomic) NSString *stripMobileMSuffixIfPresent;	// G=0x12fe1; 
@property(readonly, assign, nonatomic) BOOL hasMobileMeSuffix;	// G=0x12fc1; 
@property(readonly, assign, nonatomic) NSString *mobileMeDomain;	// G=0x12ee9; 
// declared property getter: - (id)stripMobileMSuffixIfPresent;	// 0x12fe1
// declared property getter: - (BOOL)hasMobileMeSuffix;	// 0x12fc1
// declared property getter: - (id)mobileMeDomain;	// 0x12ee9
@end

@interface XXUnknownSuperclass (_IMNotificationCenterAdditions)
- (void)__mainThreadPostNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x2a345
- (void)__mainThreadPostNotificationName:(id)name object:(id)object;	// 0x2a21d
- (void)__mainThreadPostNotification:(id)notification;	// 0x2a111
@end