/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class _UICollectionLayoutDimension;

@interface _UICollectionLayoutSize : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {

	_UICollectionLayoutDimension* _width;
	_UICollectionLayoutDimension* _height;

}

@property (nonatomic,readonly) _UICollectionLayoutDimension * width; 
@property (nonatomic,readonly) _UICollectionLayoutDimension * height; 
+(id)sizeWithWidth:(id)arg1 height:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UICollectionLayoutDimension *)width;
-(_UICollectionLayoutDimension *)height;
-(id)initWithWidth:(id)arg1 height:(id)arg2 ;
-(id)_apiRepresentation;
@end

