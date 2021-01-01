/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray;

@interface ICEResultWaitQueue : NSObject {

	NSMutableArray* queryList;
	opaque_pthread_cond_t resCond;
	opaque_pthread_mutex_t resMutex;

}
-(id)init;
-(void)dealloc;
-(id)copyResultForCallID:(unsigned)arg1 ;
-(void)addResult:(tagCONNRESULT*)arg1 forCallID:(unsigned)arg2 ;
@end

