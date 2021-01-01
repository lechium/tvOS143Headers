/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMCameraControl.h>
#import <libobjc.A.dylib/_HMCameraSnapshotControlDelegate.h>

@protocol HMCameraSnapshotControlDelegate;
@class HMFUnfairLock, _HMCameraSnapshotControl, HMCameraSnapshot, NSString;

@interface HMCameraSnapshotControl : HMCameraControl <_HMCameraSnapshotControlDelegate> {

	HMFUnfairLock* _lock;
	id<HMCameraSnapshotControlDelegate> _delegate;
	_HMCameraSnapshotControl* _snapshotControl;

}

@property (nonatomic,retain) _HMCameraSnapshotControl * snapshotControl;                       //@synthesize snapshotControl=_snapshotControl - In the implementation block
@property (assign,nonatomic,__weak) id<HMCameraSnapshotControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMCameraSnapshot * mostRecentSnapshot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HMCameraSnapshotControlDelegate>)delegate;
-(void)setDelegate:(id<HMCameraSnapshotControlDelegate>)arg1 ;
-(HMCameraSnapshot *)mostRecentSnapshot;
-(void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3 ;
-(void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1 ;
-(void)takeSnapshot;
-(void)fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithSnapshotControl:(id)arg1 ;
-(_HMCameraSnapshotControl *)snapshotControl;
-(void)setSnapshotControl:(_HMCameraSnapshotControl *)arg1 ;
@end

