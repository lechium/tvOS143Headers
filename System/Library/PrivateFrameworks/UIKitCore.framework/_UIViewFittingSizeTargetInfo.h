/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIViewFittingSizeTargetInfo : NSObject <NSCopying> {

	BOOL _dummy;
	float _horizontalPriority;
	float _verticalPriority;
	CGSize _targetSize;

}

@property (nonatomic,readonly) CGSize targetSize;                     //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) float horizontalPriority;              //@synthesize horizontalPriority=_horizontalPriority - In the implementation block
@property (nonatomic,readonly) float verticalPriority;                //@synthesize verticalPriority=_verticalPriority - In the implementation block
@property (assign,getter=isDummy,nonatomic) BOOL dummy;               //@synthesize dummy=_dummy - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(CGSize)targetSize;
-(float)horizontalPriority;
-(float)verticalPriority;
-(BOOL)isEqualToTargetInfo:(id)arg1 ;
-(id)initWithTargetSize:(CGSize)arg1 horizontalPriority:(float)arg2 verticalPriority:(float)arg3 ;
-(BOOL)isDummy;
-(void)setDummy:(BOOL)arg1 ;
@end
