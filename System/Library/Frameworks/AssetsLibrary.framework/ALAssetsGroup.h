/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetsGroupPrivate;

@interface ALAssetsGroup : NSObject {

	id _internal;

}

@property (nonatomic,retain) ALAssetsGroupPrivate * internal;                //@synthesize internal=_internal - In the implementation block
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
-(id)description;
-(void)dealloc;
-(BOOL)isValid;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)isEditable;
-(id)_uuid;
-(ALAssetsGroupPrivate *)internal;
-(void)setInternal:(ALAssetsGroupPrivate *)arg1 ;
-(BOOL)addAsset:(id)arg1 ;
-(long long)numberOfAssets;
-(CGImageRef)posterImage;
-(void)enumerateAssetsUsingBlock:(/*^block*/id)arg1 ;
-(id)_typeAsString;
-(void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithPhotoAlbum:(id)arg1 library:(id)arg2 type:(unsigned long long)arg3 ;
-(void)setAssetsFilter:(id)arg1 ;
-(void)enumerateAssetsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

