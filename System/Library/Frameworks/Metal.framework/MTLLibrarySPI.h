/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray;


@protocol MTLLibrarySPI <MTLLibrary>
@property (copy) NSString * overrideTriple; 
@property (readonly) NSArray * externFunctionNames; 
@required
-(id)newExternFunctionWithName:(id)arg1;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(NSString *)overrideTriple;
-(void)setOverrideTriple:(id)arg1;
-(NSArray *)externFunctionNames;

@end

