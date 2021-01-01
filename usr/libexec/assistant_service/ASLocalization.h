//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ASLocalization : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSString *_languageCode;	// 16 = 0x10
    NSMutableDictionary *_stringTables;	// 24 = 0x18
}

+ (id)sharedLocalization;	// IMP=0x0000000100002da4
- (void).cxx_destruct;	// IMP=0x00000001000035e8
- (id)localizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;	// IMP=0x00000001000030d0
- (void)_clearTableCache;	// IMP=0x00000001000030a0
- (void)_languageCodeChanged;	// IMP=0x0000000100003028
- (id)_languageCode;	// IMP=0x0000000100002ef8
- (void)dealloc;	// IMP=0x0000000100002eac
- (id)init;	// IMP=0x0000000100002e10

@end

