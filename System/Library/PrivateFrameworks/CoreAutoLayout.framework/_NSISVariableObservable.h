/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSObservationSource.h>

@class NSISVariable, NSISEngine;

@interface _NSISVariableObservable : NSObservationSource {

	_NSISVariableObservable* _nextDirtyObservable;
	_NSISVariableObservable* _prevDirtyObservable;
	double _lastValue;
	NSISVariable* _variable;
	NSISEngine* _associatedEngine;
	unsigned _hasLastValue : 1;
	unsigned _valueIsDirtied : 1;

}
+(id)observableForVariable:(id)arg1 inEngine:(id)arg2 ;
-(void)dealloc;
-(void)receiveObservedValue:(id)arg1 ;
-(BOOL)valueHasChanged;
-(void)emitValueIfNeeded;
@end

