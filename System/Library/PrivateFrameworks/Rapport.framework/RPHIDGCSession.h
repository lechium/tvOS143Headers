/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, RPMessageable;
#import <Rapport/Rapport-Structs.h>
@class NSObject, NSDictionary;

@interface RPHIDGCSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSDictionary* _options;
	id<RPMessageable> _messenger;

}

@property (nonatomic,retain) id<RPMessageable> messenger;              //@synthesize messenger=_messenger - In the implementation block
-(void)invalidate;
-(void)_invalidate;
-(id)initWithOptions:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id<RPMessageable>)messenger;
-(void)sendGCEvent:(RPHIDGCEvent*)arg1 destinationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
@end

