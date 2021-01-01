/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSObservation.h>

@protocol NSObservable;
@class NSObject;

@interface _NSConcreteBlockSinkObservation : NSObservation {

	NSObject*<NSObservable> _LHSobservable;
	/*^block*/id _block;
	int _tag;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)remove;
-(void)finishObserving;
-(void)_receiveBox:(id)arg1 ;
-(id)initWithObservable:(id)arg1 blockSink:(/*^block*/id)arg2 tag:(int)arg3 ;
-(void*)_observerStorageOfSize:(unsigned long long)arg1 ;
-(id*)_observerStorage;
@end

