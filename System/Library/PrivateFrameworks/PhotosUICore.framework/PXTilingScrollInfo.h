/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXTilingScrollInfo : NSObject <NSCopying> {

	BOOL _pagingEnabled;
	unsigned long long _axis;
	CGSize _interpageSpacing;
	CGPoint _pagingOrigin;

}

@property (assign,nonatomic) unsigned long long axis;                                //@synthesize axis=_axis - In the implementation block
@property (assign,getter=isPagingEnabled,nonatomic) BOOL pagingEnabled;              //@synthesize pagingEnabled=_pagingEnabled - In the implementation block
@property (assign,nonatomic) CGSize interpageSpacing;                                //@synthesize interpageSpacing=_interpageSpacing - In the implementation block
@property (assign,nonatomic) CGPoint pagingOrigin;                                   //@synthesize pagingOrigin=_pagingOrigin - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)axis;
-(void)setAxis:(unsigned long long)arg1 ;
-(void)setPagingEnabled:(BOOL)arg1 ;
-(BOOL)isPagingEnabled;
-(CGSize)interpageSpacing;
-(void)setInterpageSpacing:(CGSize)arg1 ;
-(CGPoint)pagingOrigin;
-(void)setPagingOrigin:(CGPoint)arg1 ;
@end

