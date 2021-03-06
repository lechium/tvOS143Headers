//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MCProvisioningProfileJanitor : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_misValidationQueue;	// 16 = 0x10
}

+ (id)sharedJanitor;	// IMP=0x000000010005c5dc
- (void).cxx_destruct;	// IMP=0x000000010005df60
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *misValidationQueue; // @synthesize misValidationQueue=_misValidationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)earliestRequiredManagedAppValidationDate;	// IMP=0x000000010005de2c
- (void)revalidateManagedApps;	// IMP=0x000000010005de20
- (void)_enumerateManagedAppUPPs:(CDUnknownBlockType)arg1;	// IMP=0x000000010005d7f4
- (void)_misValidateUPPProfileUUIDs:(id)arg1 profileType:(id)arg2;	// IMP=0x000000010005d55c
- (void)_workQueueUpdateMISUPPTrustWithTrustCodeSigningIdentities:(id)arg1 validateApps:(id)arg2 validateManagedApps:(_Bool)arg3;	// IMP=0x000000010005c818
- (void)updateMISTrust;	// IMP=0x000000010005c800
- (void)updateMISTrustAndValidateApps:(id)arg1 validateManagedApps:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010005c648
- (id)init;	// IMP=0x000000010005c514

@end

