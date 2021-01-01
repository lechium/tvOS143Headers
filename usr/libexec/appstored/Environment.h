//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SQLiteDatabase;
@protocol OS_dispatch_queue;

@interface Environment : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    SQLiteDatabase *_userDatabase;	// 16 = 0x10
    SQLiteDatabase *_systemDatabase;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010010307c
- (void).cxx_destruct;	// IMP=0x00000001001034e8
@property(readonly) SQLiteDatabase *userDatabase;
@property(readonly) SQLiteDatabase *systemDatabase;
- (id)init;	// IMP=0x00000001001030e8

@end
