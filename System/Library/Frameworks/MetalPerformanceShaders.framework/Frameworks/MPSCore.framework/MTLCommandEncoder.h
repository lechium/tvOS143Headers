/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol MTLCommandEncoder <NSObject>
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@required
-(NSString *)label;
-(void)setLabel:(id)arg1;
-(id<MTLDevice>)device;
-(void)pushDebugGroup:(id)arg1;
-(void)popDebugGroup;
-(void)endEncoding;
-(void)insertDebugSignpost:(id)arg1;

@end

