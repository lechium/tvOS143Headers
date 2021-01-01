//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSString;
@protocol MRDMigrationEventDelegate;

@interface MRDMigrationEvent : NSObject
{
    NSMutableArray *_prepareCompletions;	// 8 = 0x8
    _Bool _isPrepared;	// 16 = 0x10
    _Bool _isPreparing;	// 17 = 0x11
    NSString *_rapportUID;	// 24 = 0x18
    NSString *_inputUID;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    id <MRDMigrationEventDelegate> _delegate;	// 48 = 0x30
    NSString *_deviceUID;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100024910
@property(readonly, nonatomic) _Bool isPreparing; // @synthesize isPreparing=_isPreparing;
@property(readonly, nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *deviceUID; // @synthesize deviceUID=_deviceUID;
@property(nonatomic) __weak id <MRDMigrationEventDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *inputUID; // @synthesize inputUID=_inputUID;
@property(readonly, nonatomic) NSString *rapportUID; // @synthesize rapportUID=_rapportUID;
- (id)createNotificationInfo;	// IMP=0x0000000100024818
- (void)migrateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024778
- (void)_prepareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000246d8
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024028
@property(readonly, nonatomic) NSString *label;
- (id)description;	// IMP=0x0000000100023e64
- (id)initWithUID:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000100023ce4

@end
