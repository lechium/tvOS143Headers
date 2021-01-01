/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoFoundation/PhotoFoundation-Structs.h>
@interface PFTimedPerfCheck : NSObject {

	BOOL _isSessionCompleted;
	os_unfair_lock_s _sessionCompletedLock;
	pc_sessionRef _pc_session;
	double _initialProcessMemoryPeak;
	double _initialProcessMemoryCurrent;

}
+(id)start;
-(id)init;
-(void)dealloc;
-(id)stop;
-(void)setup;
-(id)perfCheckLogStringWithPerfCheckInfo:(id)arg1 ;
-(id)endSessionAndReturnPerfCheckExtraInformation;
@end
