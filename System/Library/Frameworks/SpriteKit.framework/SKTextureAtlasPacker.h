/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SpriteKit/SpriteKit-Structs.h>
@interface SKTextureAtlasPacker : NSObject
+(CGImageRef)copyProcessedImageSource:(id)arg1 ;
-(void)generateTextureAtlasImages:(id)arg1 outputDictionary:(id*)arg2 forcePOT:(BOOL)arg3 ;
-(CGRect)calcNonAlphaArea:(CGImageRef)arg1 ;
-(CGImageRef)copyRotateCGImage:(CGImageRef)arg1 direction:(BOOL)arg2 ;
-(BOOL)isFullyOpaque:(CGImageRef)arg1 ;
-(id)partitionTextureFilesByResolution:(id)arg1 ;
-(id)generateMetaData;
-(id)processPackedTextureAtlas:(const vector<CGSize, std::__1::allocator<CGSize> >*)arg1 suffix:(id)arg2 packer:(shared_ptr<MaxRectTexturePacker>*)arg3 sortedTrimArray:(const vector<CGRect, std::__1::allocator<CGRect> >*)arg4 sortedTextureArray:(const vector<TextureInfo, std::__1::allocator<TextureInfo> >*)arg5 ;
-(id)getTextureFileList:(id)arg1 modDate:(id*)arg2 ;
@end

