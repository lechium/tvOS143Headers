//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_activity;

@interface GKActivity : NSObject
{
    unsigned int _mode;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSObject<OS_os_activity> *_parent;	// 24 = 0x18
    NSObject<OS_os_activity> *_activity;	// 32 = 0x20
}

+ (void)execute:(CDUnknownBlockType)arg1;	// IMP=0x00000001000617c8
+ (void)named:(id)arg1 execute:(CDUnknownBlockType)arg2;	// IMP=0x0000000100061718
+ (id)named:(id)arg1;	// IMP=0x00000001000611c4
+ (id)currentOrNew;	// IMP=0x000000010006115c
+ (id)detached;	// IMP=0x00000001000610f4
+ (id)activity;	// IMP=0x0000000100060f20
- (void).cxx_destruct;	// IMP=0x0000000100061938
@property(retain, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSObject<OS_os_activity> *parent; // @synthesize parent=_parent;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)execute:(CDUnknownBlockType)arg1;	// IMP=0x0000000100061838
- (void)named:(id)arg1 execute:(CDUnknownBlockType)arg2;	// IMP=0x000000010006168c
- (id)named:(id)arg1;	// IMP=0x0000000100061660
- (id)child;	// IMP=0x00000001000615d8
- (void)createActivity;	// IMP=0x0000000100061224
- (id)initWithName:(id)arg1 parent:(id)arg2 mode:(unsigned int)arg3;	// IMP=0x0000000100060e60

@end

