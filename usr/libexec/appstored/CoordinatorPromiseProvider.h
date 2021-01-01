//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IXCoordinatorWithAppAssetPromise;

@interface CoordinatorPromiseProvider : NSObject
{
    id <IXCoordinatorWithAppAssetPromise> _coordinator;	// 8 = 0x8
}

+ (id)_newPromiseUsingDefinition:(id)arg1;	// IMP=0x000000010015ce40
- (void).cxx_destruct;	// IMP=0x000000010015d104
- (id)_setPromiseUsingSpecification:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010015cf3c
- (id)truncatePromiseID:(id)arg1 usingSpecification:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010015ce2c
- (id)resetPromiseID:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010015ce20
- (id)fetchPromiseID:(id)arg1 orCreateUsingSpecification:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010015cd38
- (id)fetchPromiseID:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010015cb2c
- (_Bool)failPromiseID:(id)arg1 forReason:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010015c8bc
- (id)initWithCoordinator:(id)arg1 error:(id *)arg2;	// IMP=0x000000010015c760

@end

