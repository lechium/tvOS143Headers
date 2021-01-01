/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxImage.h>

@interface FxHeliumImage : FxImage {

	FxHeliumImagePriv* _heliumImagePriv;

}
-(void)dealloc;
-(id)initWithInfo:(SCD_Struct_PA82)arg1 ;
-(unsigned long long)imageType;
-(HGRef<HGNode>*)heliumRef;
-(void)setHeliumRef:(const HGRef<HGNode>*)arg1 ;
-(HGNode*)heliumNode;
-(id)initWithInfo:(SCD_Struct_PA82)arg1 andHeliumRef:(const HGRef<HGNode>*)arg2 ;
-(id)initWithInfo:(SCD_Struct_PA82)arg1 andHeliumNode:(HGNode*)arg2 ;
-(void)setHeliumNode:(HGNode*)arg1 ;
@end
