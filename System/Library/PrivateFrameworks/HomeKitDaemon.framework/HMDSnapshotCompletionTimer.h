/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFTimer.h>

@class HMDSnapshotSession;

@interface HMDSnapshotCompletionTimer : HMFTimer {

	HMDSnapshotSession* _snapshotSession;

}

@property (nonatomic,__weak,readonly) HMDSnapshotSession * snapshotSession;              //@synthesize snapshotSession=_snapshotSession - In the implementation block
-(id)initWithSnapshotSession:(id)arg1 timer:(double)arg2 ;
-(HMDSnapshotSession *)snapshotSession;
@end

