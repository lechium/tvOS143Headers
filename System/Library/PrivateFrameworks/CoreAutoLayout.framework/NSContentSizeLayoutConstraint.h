/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAutoLayout/NSLayoutConstraint.h>

@interface NSContentSizeLayoutConstraint : NSLayoutConstraint {

	double _huggingPriority;
	double _compressionResistancePriority;

}

@property (readonly) double huggingPriority;                            //@synthesize huggingPriority=_huggingPriority - In the implementation block
@property (readonly) double compressionResistancePriority;              //@synthesize compressionResistancePriority=_compressionResistancePriority - In the implementation block
-(double)priorityForVariable:(id)arg1 ;
-(id)_priorityDescription;
-(id)initWithLayoutItem:(id)arg1 value:(double)arg2 huggingPriority:(double)arg3 compressionResistancePriority:(double)arg4 orientation:(long long)arg5 ;
-(double)huggingPriority;
-(double)compressionResistancePriority;
@end
