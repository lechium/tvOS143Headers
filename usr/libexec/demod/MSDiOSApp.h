//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MSDiOSApp : NSObject
{
    _Bool _isMacApp;	// 8 = 0x8
    _Bool _isAlmondApp;	// 9 = 0x9
    NSString *_path;	// 16 = 0x10
    NSDictionary *_info;	// 24 = 0x18
    NSString *_executableFileName;	// 32 = 0x20
}

+ (id)appWithPath:(id)arg1;	// IMP=0x000000010001f8e0
- (void).cxx_destruct;	// IMP=0x0000000100020df8
@property(retain, nonatomic) NSString *executableFileName; // @synthesize executableFileName=_executableFileName;
@property _Bool isAlmondApp; // @synthesize isAlmondApp=_isAlmondApp;
@property _Bool isMacApp; // @synthesize isMacApp=_isMacApp;
@property(retain) NSDictionary *info; // @synthesize info=_info;
@property(retain) NSString *path; // @synthesize path=_path;
- (id)serachForFileWithSuffix:(id)arg1 inFolder:(id)arg2;	// IMP=0x0000000100020ac8
- (id)codeSignaturePathForAlmondApp;	// IMP=0x0000000100020950
- (id)executableFilePathForAlmondApp;	// IMP=0x00000001000207b0
- (_Bool)_isAlmondApp;	// IMP=0x00000001000206f4
- (id)codeResourcesFilePath;	// IMP=0x00000001000205d0
- (id)executableFilePath;	// IMP=0x0000000100020488
- (id)versionInfo;	// IMP=0x0000000100020258
- (id)uniqueIdentifier;	// IMP=0x000000010001fbf4
- (void)dealloc;	// IMP=0x000000010001fb90
- (id)initWithPath:(id)arg1;	// IMP=0x000000010001f934

@end

