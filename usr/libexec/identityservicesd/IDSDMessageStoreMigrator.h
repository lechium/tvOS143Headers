//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSDMessageStoreMigrator : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00000001003d4504
- (void)_checkAndUpdateDBIfRequiredForClass:(unsigned int)arg1;	// IMP=0x00000001003d4858
- (void)migrateClassD;	// IMP=0x00000001003d4820
- (void)migrateClassC;	// IMP=0x00000001003d47e4
- (void)migrateClassA;	// IMP=0x00000001003d47ac
- (id)init;	// IMP=0x00000001003d46b0

@end
