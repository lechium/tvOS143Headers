/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetAppsUtilities/_NAObserverProxy.h>

@class NSString;

@interface _NAKeyValueObserverProxy : _NAObserverProxy {

	BOOL _isObserving;
	/*^block*/id _observerBlock;
	id _observedObject;
	NSString* _keyPath;

}

@property (nonatomic,copy,readonly) id observerBlock;                 //@synthesize observerBlock=_observerBlock - In the implementation block
@property (nonatomic,__weak,readonly) id observedObject;              //@synthesize observedObject=_observedObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;               //@synthesize keyPath=_keyPath - In the implementation block
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)keyPath;
-(id)initWithWeakObserver:(id)arg1 observedObject:(id)arg2 keyPath:(id)arg3 options:(unsigned long long)arg4 observerBlock:(/*^block*/id)arg5 ;
-(id)observerBlock;
-(id)observedObject;
@end
