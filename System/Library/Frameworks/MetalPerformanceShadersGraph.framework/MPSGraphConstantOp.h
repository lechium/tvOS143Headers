/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <MetalPerformanceShadersGraph/MPSGraphOperation.h>

@class NSData, NSArray;

@interface MPSGraphConstantOp : MPSGraphOperation {

	NSData* _data;
	unsigned _dataType;
	NSArray* _shape;

}

@property (nonatomic,readonly) NSArray * shape;                //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) unsigned dataType;              //@synthesize dataType=_dataType - In the implementation block
-(unsigned)dataType;
-(NSArray *)shape;
-(Value)makeMLIROpWithBuilder:(OpBuilder*)arg1 symbolTable:(MPSSymbolTable=StringMap<std::__1::basic_string<char>, llvm::MallocAllocator>=StringMapEntryBase}IIIIMallocAllocator}}Ref)arg2 inputValues:(vector<mlir::Value, std::__1::allocator<mlir::Value> >*)arg3 opInitialization:(BOOL)arg4 name:(id)arg5 ;
-(id)initWithGraph:(id)arg1 data:(id)arg2 shape:(id)arg3 dataType:(unsigned)arg4 name:(id)arg5 ;
@end

