/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVKVOIntrospection.h>
#import <AVFCore/AVCallbackCancellation.h>

@protocol AVKVOIntrospectionAVCallbackCancellation;
@class NSObject, NSString;

@interface AVKeyPathFlattenerKVOIntrospectionShim : NSObject <AVKVOIntrospection, AVCallbackCancellation> {

	NSObject* _observedObject;
	id<AVKVOIntrospection><AVCallbackCancellation> _realNotifier;

}

@property (nonatomic,readonly) NSObject * observedObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject *)observedObject;
-(void)cancelCallbacks;
-(id)initWithObservedObject:(id)arg1 realNotifier:(id)arg2 ;
@end

