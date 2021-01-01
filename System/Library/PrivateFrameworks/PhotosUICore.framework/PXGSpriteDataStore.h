/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGDiagnosticsProvider.h>

@class NSString;

@interface PXGSpriteDataStore : NSObject <PXGDiagnosticsProvider> {

	unsigned _capacity;
	unsigned _count;
	SCD_Struct_PX11* _geometries;
	SCD_Struct_PX83* _styles;
	SCD_Struct_PX15* _infos;

}

@property (assign,nonatomic) unsigned count;                                       //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX11* geometries;                        //@synthesize geometries=_geometries - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX83* styles;                            //@synthesize styles=_styles - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX15* infos;                             //@synthesize infos=_infos - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX84* sprites; 
@property (nonatomic,copy,readonly) NSString * diagnosticDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newSpriteDataStore;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(unsigned)count;
-(id)_init;
-(void)recycle;
-(void)setCount:(unsigned)arg1 ;
-(SCD_Struct_PX15*)infos;
-(SCD_Struct_PX83*)styles;
-(NSString *)diagnosticDescription;
-(void)removeSpritesInRange:(PXGSpriteIndexRange)arg1 ;
-(void)moveSpritesInRange:(PXGSpriteIndexRange)arg1 toRange:(PXGSpriteIndexRange)arg2 ;
-(void)enumerateSpritesInRange:(PXGSpriteIndexRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateSpritesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(SCD_Struct_PX11*)geometries;
-(void)insertSpritesInRange:(PXGSpriteIndexRange)arg1 ;
-(void)moveSpritesFromIndexes:(CFArrayRef)arg1 toIndexes:(id)arg2 ;
-(void)applyChangeDetails:(id)arg1 ;
-(SCD_Struct_PX84*)spritesInRange:(PXGSpriteIndexRange)arg1 ;
-(SCD_Struct_PX84*)sprites;
-(void)setSprites:(SCD_Struct_PX84*)arg1 ;
-(id)spriteIndexesInRect:(CGRect)arg1 ;
-(id)spriteIndexesWithMediaFlags:(unsigned char)arg1 ;
-(void)_collectSpriteIndexes:(id)arg1 inRange:(PXGSpriteIndexRange)arg2 inRect:(CGRect)arg3 ;
-(id)spriteAtIndexes:(id)arg1 inRect:(CGRect)arg2 ;
@end

