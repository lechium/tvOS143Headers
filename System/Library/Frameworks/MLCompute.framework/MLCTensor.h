/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MLCTensorDescriptor, NSData, NSString, MLCDevice, NSArray, NSMutableArray, MLCLayer;

@interface MLCTensor : NSObject <NSCopying> {

	BOOL _isTemporary;
	BOOL _memorySharedWithAnotherTensor;
	BOOL _isLiveOutput;
	BOOL _isLayerParameter;
	BOOL _skipWritingToDevice;
	int _multiDeviceReductionType;
	unsigned long long _tensorID;
	MLCTensorDescriptor* _descriptor;
	NSData* _data;
	NSString* _label;
	MLCDevice* _device;
	NSArray* _optimizerData;
	NSArray* _optimizerDeviceData;
	NSMutableArray* _parentLayers;
	NSMutableArray* _childLayers;
	NSMutableArray* _deviceMemory;
	NSMutableArray* _broadcastabledeviceMemory;
	unsigned long long _readCount;
	MLCTensor* _sharedMemoryTensor;
	unsigned long long _concatOffset;
	unsigned long long _concatDimension;
	unsigned long long _splitOffset;
	unsigned long long _splitDimension;
	unsigned long long _rootSourceGradientTensorIndexStart;
	unsigned long long _rootSourceGradientTensorCount;
	unsigned long long _rootSourceGradientTensorIndex;
	MLCLayer* _intermediateSumLayer;
	unsigned long long _interleave;
	id _deviceDataSources;

}

@property (assign,nonatomic) unsigned long long tensorID;                                        //@synthesize tensorID=_tensorID - In the implementation block
@property (nonatomic,copy) MLCTensorDescriptor * descriptor;                                     //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) NSMutableArray * parentLayers;                                      //@synthesize parentLayers=_parentLayers - In the implementation block
@property (nonatomic,retain) NSMutableArray * childLayers;                                       //@synthesize childLayers=_childLayers - In the implementation block
@property (nonatomic,retain) NSData * data;                                                      //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) MLCDevice * device;                                                 //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSMutableArray * deviceMemory;                                      //@synthesize deviceMemory=_deviceMemory - In the implementation block
@property (nonatomic,retain) NSMutableArray * broadcastabledeviceMemory;                         //@synthesize broadcastabledeviceMemory=_broadcastabledeviceMemory - In the implementation block
@property (assign,nonatomic) BOOL isTemporary;                                                   //@synthesize isTemporary=_isTemporary - In the implementation block
@property (assign,nonatomic) unsigned long long readCount;                                       //@synthesize readCount=_readCount - In the implementation block
@property (assign,nonatomic) BOOL memorySharedWithAnotherTensor;                                 //@synthesize memorySharedWithAnotherTensor=_memorySharedWithAnotherTensor - In the implementation block
@property (assign,nonatomic) int multiDeviceReductionType;                                       //@synthesize multiDeviceReductionType=_multiDeviceReductionType - In the implementation block
@property (nonatomic,retain) MLCTensor * sharedMemoryTensor;                                     //@synthesize sharedMemoryTensor=_sharedMemoryTensor - In the implementation block
@property (assign,nonatomic) unsigned long long concatOffset;                                    //@synthesize concatOffset=_concatOffset - In the implementation block
@property (assign,nonatomic) unsigned long long concatDimension;                                 //@synthesize concatDimension=_concatDimension - In the implementation block
@property (assign,nonatomic) unsigned long long splitOffset;                                     //@synthesize splitOffset=_splitOffset - In the implementation block
@property (assign,nonatomic) unsigned long long splitDimension;                                  //@synthesize splitDimension=_splitDimension - In the implementation block
@property (assign,nonatomic) unsigned long long rootSourceGradientTensorIndexStart;              //@synthesize rootSourceGradientTensorIndexStart=_rootSourceGradientTensorIndexStart - In the implementation block
@property (assign,nonatomic) unsigned long long rootSourceGradientTensorCount;                   //@synthesize rootSourceGradientTensorCount=_rootSourceGradientTensorCount - In the implementation block
@property (assign,nonatomic) unsigned long long rootSourceGradientTensorIndex;                   //@synthesize rootSourceGradientTensorIndex=_rootSourceGradientTensorIndex - In the implementation block
@property (nonatomic,retain) MLCLayer * intermediateSumLayer;                                    //@synthesize intermediateSumLayer=_intermediateSumLayer - In the implementation block
@property (assign,nonatomic) unsigned long long interleave;                                      //@synthesize interleave=_interleave - In the implementation block
@property (assign,nonatomic) BOOL isLiveOutput;                                                  //@synthesize isLiveOutput=_isLiveOutput - In the implementation block
@property (nonatomic,copy) NSArray * optimizerData;                                              //@synthesize optimizerData=_optimizerData - In the implementation block
@property (nonatomic,copy) NSArray * optimizerDeviceData;                                        //@synthesize optimizerDeviceData=_optimizerDeviceData - In the implementation block
@property (assign,nonatomic) BOOL isLayerParameter;                                              //@synthesize isLayerParameter=_isLayerParameter - In the implementation block
@property (nonatomic,retain) id deviceDataSources;                                               //@synthesize deviceDataSources=_deviceDataSources - In the implementation block
@property (assign,nonatomic) BOOL skipWritingToDevice;                                           //@synthesize skipWritingToDevice=_skipWritingToDevice - In the implementation block
@property (nonatomic,copy) NSString * label;                                                     //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasValidNumerics; 
+(void)initialize;
+(id)tensorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannelCount:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 data:(id)arg5 ;
+(id)tensorWithDescriptor:(id)arg1 data:(id)arg2 ;
+(id)tensorWithDescriptor:(id)arg1 ;
+(id)tensorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannelCount:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 ;
+(id)newDataForTensorDescriptor:(id)arg1 fillWithData:(id)arg2 ;
+(id)newRandomDataForWeightTensorDescriptor:(id)arg1 randomInitializerType:(int)arg2 ;
+(id)tensorWithDescriptor:(id)arg1 randomInitializerType:(int)arg2 ;
+(id)tensorWithDescriptor:(id)arg1 fillWithData:(id)arg2 ;
+(id)tensorWithSequenceLengths:(id)arg1 sortedSequences:(BOOL)arg2 featureChannelCount:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 randomInitializerType:(int)arg5 ;
+(id)tensorWithSequenceLengths:(id)arg1 sortedSequences:(BOOL)arg2 featureChannelCount:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 data:(id)arg5 ;
+(id)tensorWithShape:(id)arg1 ;
+(id)tensorWithShape:(id)arg1 randomInitializerType:(int)arg2 ;
+(id)tensorWithShape:(id)arg1 dataType:(int)arg2 ;
+(id)tensorWithShape:(id)arg1 fillWithData:(id)arg2 dataType:(int)arg3 ;
+(id)tensorWithShape:(id)arg1 data:(id)arg2 dataType:(int)arg3 ;
+(id)tensorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannelCount:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 fillWithData:(float)arg5 dataType:(int)arg6 ;
+(id)tensorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannelCount:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 randomInitializerType:(int)arg5 ;
+(id)tensorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannelCount:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 data:(id)arg5 dataType:(int)arg6 ;
+(id)tensorWithSequenceLength:(unsigned long long)arg1 featureChannelCount:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 ;
+(id)tensorWithSequenceLength:(unsigned long long)arg1 featureChannelCount:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 randomInitializerType:(int)arg4 ;
+(id)tensorWithSequenceLength:(unsigned long long)arg1 featureChannelCount:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 data:(id)arg4 ;
+(BOOL)canConvertValue:(float)arg1 toDataType:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)label;
-(MLCTensorDescriptor *)descriptor;
-(void)setLabel:(NSString *)arg1 ;
-(MLCDevice *)device;
-(void)setDevice:(MLCDevice *)arg1 ;
-(void)setDescriptor:(MLCTensorDescriptor *)arg1 ;
-(unsigned long long)readCount;
-(void)setReadCount:(unsigned long long)arg1 ;
-(BOOL)isTemporary;
-(unsigned long long)splitDimension;
-(void)setSplitDimension:(unsigned long long)arg1 ;
-(NSMutableArray *)parentLayers;
-(NSMutableArray *)childLayers;
-(NSArray *)optimizerDeviceData;
-(NSArray *)optimizerData;
-(MLCTensor *)sharedMemoryTensor;
-(void)setIsLayerParameter:(BOOL)arg1 ;
-(NSMutableArray *)deviceMemory;
-(void)setMultiDeviceReductionType:(int)arg1 ;
-(void)allocateDeviceMemory:(id)arg1 ;
-(void)writeTensorDataToAllDevices:(id)arg1 ;
-(void)setOptimizerData:(NSArray *)arg1 ;
-(void)setOptimizerDeviceData:(NSArray *)arg1 ;
-(MLCLayer *)intermediateSumLayer;
-(void)setIntermediateSumLayer:(MLCLayer *)arg1 ;
-(int)multiDeviceReductionType;
-(unsigned long long)calculateBatchSizeToUse:(unsigned long long)arg1 ;
-(void)setDeviceMemory:(NSMutableArray *)arg1 ;
-(void)setMemorySharedWithAnotherTensor:(BOOL)arg1 ;
-(unsigned long long)interleave;
-(void)setIsLiveOutput:(BOOL)arg1 ;
-(BOOL)isLiveOutput;
-(unsigned long long)concatDimension;
-(unsigned long long)concatOffset;
-(unsigned long long)splitOffset;
-(NSMutableArray *)broadcastabledeviceMemory;
-(unsigned long long)rootSourceGradientTensorCount;
-(unsigned long long)rootSourceGradientTensorIndexStart;
-(unsigned long long)rootSourceGradientTensorIndex;
-(void)setRootSourceGradientTensorIndexStart:(unsigned long long)arg1 ;
-(void)setRootSourceGradientTensorCount:(unsigned long long)arg1 ;
-(void)setRootSourceGradientTensorIndex:(unsigned long long)arg1 ;
-(void)setConcatOffset:(unsigned long long)arg1 ;
-(void)setConcatDimension:(unsigned long long)arg1 ;
-(void)setSharedMemoryTensor:(MLCTensor *)arg1 ;
-(BOOL)bindOptimizerData:(id)arg1 deviceData:(id)arg2 ;
-(BOOL)isLayerParameter;
-(unsigned long long)tensorID;
-(BOOL)synchronizeData;
-(id)deviceDataSources;
-(void)setDeviceDataSources:(id)arg1 ;
-(void)setIsTemporary:(BOOL)arg1 ;
-(BOOL)memorySharedWithAnotherTensor;
-(void)setInterleave:(unsigned long long)arg1 ;
-(BOOL)doesShapeMatchWithTensor:(id)arg1 ;
-(id)initWithTensorDescriptor:(id)arg1 tensorData:(id)arg2 parentLayers:(id)arg3 childLayers:(id)arg4 device:(id)arg5 deviceMemory:(id)arg6 ;
-(BOOL)dataContainsScalarWhere:(/*^block*/id)arg1 ;
-(void)writeTensorDataToAllDevices:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(void)setSplitOffset:(unsigned long long)arg1 ;
-(id)copyAndReplaceData:(id)arg1 ;
-(BOOL)hasValidNumerics;
-(BOOL)copyDataFromDeviceMemoryToBytes:(void*)arg1 length:(unsigned long long)arg2 synchronizeWithDevice:(BOOL)arg3 ;
-(BOOL)bindAndWriteData:(id)arg1 toDevice:(id)arg2 ;
-(BOOL)synchronizeOptimizerData;
-(void)deallocateDeviceMemory:(id)arg1 ;
-(void)dispatchWriteTensorDataToAllDevices:(id)arg1 ;
-(void)dispatchWriteTensorDataToAllDevices:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(id)readTensorDataFromAnyOneDevice:(id)arg1 ;
-(id)readTensorDataFromAnyOneDevice:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(void)setTensorID:(unsigned long long)arg1 ;
-(void)setParentLayers:(NSMutableArray *)arg1 ;
-(void)setChildLayers:(NSMutableArray *)arg1 ;
-(void)setBroadcastabledeviceMemory:(NSMutableArray *)arg1 ;
-(BOOL)skipWritingToDevice;
-(void)setSkipWritingToDevice:(BOOL)arg1 ;
@end
