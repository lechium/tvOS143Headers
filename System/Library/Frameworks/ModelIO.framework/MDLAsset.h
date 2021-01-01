/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol MDLObjectContainerComponent, MDLAssetResolver, MDLMeshBufferAllocator;
@class NSURL, NSMutableArray, NSMapTable, MDLVertexDescriptor, NSUnitLength, MDLAnimatedVector3Array;

@interface MDLAsset : NSObject <NSCopying, NSFastEnumeration> {

	NSURL* _URL;
	NSMutableArray* _objects;
	id<MDLObjectContainerComponent> _masters;
	id<MDLObjectContainerComponent> _animations;
	double _startTime;
	double _endTime;
	 _upAxis;
	float _metersPerUnit;
	BOOL _isSceneKitBridged;
	NSMapTable* _components;
	NSURL* _temporaryFolderURL;
	double _frameInterval;
	id<MDLAssetResolver> _resolver;
	id<MDLMeshBufferAllocator> _bufferAllocator;
	MDLVertexDescriptor* _vertexDescriptor;
	double __timeCodesPerSecond;
	NSUnitLength* _unitLength;
	MDLAnimatedVector3Array* _extents;

}

@property (nonatomic,readonly) MDLAABBRef _bounds; 
@property (assign,nonatomic) double _timeCodesPerSecond;                                       //@synthesize _timeCodesPerSecond=__timeCodesPerSecond - In the implementation block
@property (nonatomic,retain) NSURL * _temporaryFolderURL;                                      //@synthesize temporaryFolderURL=_temporaryFolderURL - In the implementation block
@property (nonatomic,retain) NSUnitLength * unitLength;                                        //@synthesize unitLength=_unitLength - In the implementation block
@property (assign,nonatomic) float metersPerUnit;                                              //@synthesize metersPerUnit=_metersPerUnit - In the implementation block
@property (nonatomic,retain) MDLAnimatedVector3Array * extents;                                //@synthesize extents=_extents - In the implementation block
@property (nonatomic,readonly) {? boundingBox; 
@property (assign,nonatomic) double frameInterval;                                             //@synthesize frameInterval=_frameInterval - In the implementation block
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (assign,nonatomic)  upAxis;                                                          //@synthesize upAxis=_upAxis - In the implementation block
@property (nonatomic,retain,readonly) NSURL * URL; 
@property (nonatomic,retain) id<MDLAssetResolver> resolver;                                    //@synthesize resolver=_resolver - In the implementation block
@property (nonatomic,retain,readonly) id<MDLMeshBufferAllocator> bufferAllocator;              //@synthesize bufferAllocator=_bufferAllocator - In the implementation block
@property (nonatomic,retain,readonly) MDLVertexDescriptor * vertexDescriptor;                  //@synthesize vertexDescriptor=_vertexDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,retain) id<MDLObjectContainerComponent> masters;                          //@synthesize masters=_masters - In the implementation block
@property (nonatomic,retain) id<MDLObjectContainerComponent> animations;                       //@synthesize animations=_animations - In the implementation block
+(BOOL)canExportFileExtension:(id)arg1 ;
+(BOOL)canImportFileExtension:(id)arg1 ;
+(id)placeLightProbesWithDensity:(float)arg1 heuristic:(long long)arg2 usingIrradianceDataSource:(id)arg3 ;
+(void)convertToUSDZ:(id)arg1 writeToURL:(id)arg2 ;
+(void)convertToUSDZWithURL:(id)arg1 ;
+(BOOL)isValidUSDZResource:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MD5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeObject:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSURL *)URL;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)components;
-(id<MDLAssetResolver>)resolver;
-(MDLVertexDescriptor *)vertexDescriptor;
-(void)setFrameInterval:(double)arg1 ;
-(double)frameInterval;
-(MDLAABBRef)_bounds;
-(id)objects;
-(id<MDLObjectContainerComponent>)animations;
-(void)setAnimations:(id<MDLObjectContainerComponent>)arg1 ;
-({?)boundingBox;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(void)_commonInit;
-(id<MDLMeshBufferAllocator>)bufferAllocator;
-({?=})boundingBoxAtTime:(double)arg1 ;
-(id)initWithBufferAllocator:(id)arg1 ;
-(void)_conformVertexBuffers:(id)arg1 error:(id*)arg2 ;
-(id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3 ;
-(void)setComponent:(id)arg1 forProtocol:(id)arg2 ;
-(id)componentConformingToProtocol:(id)arg1 ;
-(id<MDLObjectContainerComponent>)masters;
-(void)enumerateChildObjectsOfClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 stopPointer:(BOOL*)arg3 ;
-(id)childObjectsOfClass:(Class)arg1 ;
-(void)resolveTextures;
-(id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3 preserveTopology:(BOOL)arg4 error:(id*)arg5 ;
-(id)initWithURL:(id)arg1 bufferAllocator:(id)arg2 preserveIndexing:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)exportAssetToURL:(id)arg1 error:(id*)arg2 ;
-(id)objectAtPath:(id)arg1 ;
-(void)loadTextures;
-(id)initWithData:(id)arg1 name:(id)arg2 vertexDescriptor:(id)arg3 bufferAllocator:(id)arg4 preserveTopology:(BOOL)arg5 error:(id*)arg6 ;
-(id)initThroughSCNKitBridgeWithURL:(id)arg1 preserveTopology:(BOOL)arg2 error:(id)arg3 ;
-(BOOL)exportAssetToURL:(id)arg1 ;
-(void)setMasters:(id<MDLObjectContainerComponent>)arg1 ;
-(NSURL *)_temporaryFolderURL;
-(void)set_temporaryFolderURL:(NSURL *)arg1 ;
-()upAxis;
-(void)setUpAxis:;
-(void)setResolver:(id<MDLAssetResolver>)arg1 ;
-(double)_timeCodesPerSecond;
-(void)set_timeCodesPerSecond:(double)arg1 ;
-(NSUnitLength *)unitLength;
-(void)setUnitLength:(NSUnitLength *)arg1 ;
-(float)metersPerUnit;
-(void)setMetersPerUnit:(float)arg1 ;
-(MDLAnimatedVector3Array *)extents;
-(void)setExtents:(MDLAnimatedVector3Array *)arg1 ;
@end

