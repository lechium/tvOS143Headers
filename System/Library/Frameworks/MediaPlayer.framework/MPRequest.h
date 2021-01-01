/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPRequestCancellationToken.h>
#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSString, NSOperationQueue, NSError, NSObject, NSArray;

@interface MPRequest : NSObject <MPRequestCancellationToken, _MPStateDumpPropertyListTransformable, NSCopying> {

	NSString* _label;
	long long _qualityOfService;
	double _timeoutInterval;
	NSOperationQueue* _calloutQueue;
	NSError* _cancelationError;
	NSObject*<OS_dispatch_queue> _cleanupQueue;
	NSOperationQueue* _queue;
	NSArray* _middlewareClasses;

}

@property (nonatomic,readonly) NSOperationQueue * calloutQueue;                        //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,readonly) NSError * cancelationError;                             //@synthesize cancelationError=_cancelationError - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cleanupQueue;              //@synthesize cleanupQueue=_cleanupQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSArray * middlewareClasses;                                //@synthesize middlewareClasses=_middlewareClasses - In the implementation block
@property (nonatomic,copy) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                               //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                   //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClass;
+(double)expectedMaximumResponseTimeInterval;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)cancel;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(NSOperationQueue *)queue;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSOperationQueue *)calloutQueue;
-(id)_stateDumpObject;
-(id)performWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareForResponseWithCompletion:(/*^block*/id)arg1 ;
-(void)_performWithCompletion:(/*^block*/id)arg1 ;
-(NSError *)cancelationError;
-(NSObject*<OS_dispatch_queue>)cleanupQueue;
-(NSArray *)middlewareClasses;
-(void)setMiddlewareClasses:(NSArray *)arg1 ;
@end

