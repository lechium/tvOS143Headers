/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IntentsUI/IntentsUI-Structs.h>
#import <libobjc.A.dylib/SFResourceLoader.h>
#import <libobjc.A.dylib/INImageLoading.h>

@protocol INUIImageLoaderDelegate;
@class NSString;

@interface INUIImageLoader : NSObject <SFResourceLoader, INImageLoading> {

	id<INUIImageLoaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<INUIImageLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) unsigned long long servicePriority; 
+(id)registeredImageLoaderWithScreenDelegate;
-(void)dealloc;
-(id<INUIImageLoaderDelegate>)delegate;
-(void)setDelegate:(id<INUIImageLoaderDelegate>)arg1 ;
-(NSString *)serviceIdentifier;
-(unsigned long long)servicePriority;
-(BOOL)canLoadImageDataForImage:(id)arg1 ;
-(void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(SCD_Struct_IN1)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)loadImage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)registerWithIntents;
-(void)registerWithSearchFoundation;
-(void)deregisterWithSearchFoundation;
-(void)deregisterWithIntents;
@end

