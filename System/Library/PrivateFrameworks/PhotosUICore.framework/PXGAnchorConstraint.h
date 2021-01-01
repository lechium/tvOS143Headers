/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PXGSpriteReference;

@interface PXGAnchorConstraint : NSObject <NSCopying> {

	BOOL _visiblePortionOnly;
	unsigned _spriteEdge;
	unsigned _visibleRectEdge;
	PXGSpriteReference* _spriteReference;
	unsigned long long _referencingOptions;
	long long _spriteAttribute;
	long long _inequality;
	double _offset;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) PXGSpriteReference * spriteReference;               //@synthesize spriteReference=_spriteReference - In the implementation block
@property (assign,nonatomic) unsigned long long referencingOptions;              //@synthesize referencingOptions=_referencingOptions - In the implementation block
@property (assign,nonatomic) long long spriteAttribute;                          //@synthesize spriteAttribute=_spriteAttribute - In the implementation block
@property (assign,nonatomic) BOOL visiblePortionOnly;                            //@synthesize visiblePortionOnly=_visiblePortionOnly - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                               //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) long long inequality;                               //@synthesize inequality=_inequality - In the implementation block
@property (assign,nonatomic) unsigned spriteEdge;                                //@synthesize spriteEdge=_spriteEdge - In the implementation block
@property (assign,nonatomic) unsigned visibleRectEdge;                           //@synthesize visibleRectEdge=_visibleRectEdge - In the implementation block
@property (assign,nonatomic) double offset;                                      //@synthesize offset=_offset - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)offset;
-(void)setOffset:(double)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(unsigned long long)referencingOptions;
-(void)setReferencingOptions:(unsigned long long)arg1 ;
-(PXGSpriteReference *)spriteReference;
-(void)setSpriteReference:(PXGSpriteReference *)arg1 ;
-(unsigned)visibleRectEdge;
-(unsigned)spriteEdge;
-(BOOL)visiblePortionOnly;
-(long long)spriteAttribute;
-(long long)inequality;
-(void)setVisibleRectEdge:(unsigned)arg1 ;
-(void)setInequality:(long long)arg1 ;
-(void)setSpriteEdge:(unsigned)arg1 ;
-(void)setSpriteAttribute:(long long)arg1 ;
-(void)setVisiblePortionOnly:(BOOL)arg1 ;
@end

