/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/MABaseGraph.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@protocol OS_dispatch_queue, MAPersistentStoreProtocol;
@class NSObject, NSMutableDictionary, NSRecursiveLock, NSUUID, NSString;

@interface MALegacyGraph : MABaseGraph <NSXMLParserDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	id<MAPersistentStoreProtocol> _persistentStore;
	NSMutableDictionary* _nodesByIdentifier;
	NSMutableDictionary* _nodesByLabel;
	NSMutableDictionary* _nodesByDomain;
	NSMutableDictionary* _edgesByIdentifier;
	NSMutableDictionary* _edgesByLabel;
	NSMutableDictionary* _edgesByDomain;
	unsigned _lastNodeIdentifier;
	unsigned _lastEdgeIdentifier;
	void* _accessReadQueueKey;
	void* _accessWriteQueueKey;
	unsigned long long _accessRead;
	unsigned long long _accessWrite;
	NSRecursiveLock* _accessLock;
	NSUUID* _identifier;
	unsigned long long _version;

}

@property (nonatomic,retain) NSUUID * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id<MAPersistentStoreProtocol> persistentStore;              //@synthesize persistentStore=_persistentStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)persistentStoreClass;
+(void)disableKGDB;
+(void)enableKGDB;
+(id)persistentStoreFileExtension;
+(BOOL)hasMarker:(id)arg1 ;
+(BOOL)setMarkerAtURL:(id)arg1 ;
+(id)persistentStoreURLWithPath:(id)arg1 andName:(id)arg2 ;
+(BOOL)copyPersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)migratePersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)destroyPersistentStoreAtURL:(id)arg1 error:(id*)arg2 ;
+(void)deleteMarker:(id)arg1 ;
+(void)initPersistenceFormatSwitch;
+(BOOL)isMarkerDisabled;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)removeAllObjects;
-(NSUUID *)identifier;
-(unsigned long long)version;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id<MAPersistentStoreProtocol>)persistentStore;
-(void)setVersion:(unsigned long long)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)initWithSpecification:(id)arg1 ;
-(id)allNodes;
-(void)removeNode:(id)arg1 ;
-(id)allEdges;
-(id)databaseURL;
-(void)_setVersion:(unsigned long long)arg1 ;
-(void)readUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(Class)nodeClass;
-(void)removeNodes:(id)arg1 ;
-(void)invalidateMemoryCaches;
-(void)closePersistentStore;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)addUniqueNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(BOOL*)arg5 ;
-(id)nodesForLabel:(id)arg1 ;
-(BOOL)hasPendingRead;
-(id)nodesForDomain:(unsigned short)arg1 ;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(unsigned long long)edgesCount;
-(void)setMarker;
-(void)deleteMarker;
-(void)enterBatch;
-(void)leaveBatch;
-(BOOL)hasMarker;
-(unsigned long long)memoryFootprint:(id)arg1 ;
-(id)addNodeWithLabel:(id)arg1 ;
-(id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(id)addNodeFromBase:(id)arg1 ;
-(void)removeNodeEdges:(id)arg1 ;
-(id)nodeForIdentifier:(unsigned)arg1 ;
-(id)nodesForIdentifiers:(id)arg1 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg1 ;
-(id)nodesMatchingFilter:(id)arg1 ;
-(id)anyNodeForLabel:(id)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 ;
-(id)anyNodeForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyNodeMatchingFilter:(id)arg1 ;
-(id)anyNodeForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(unsigned long long)numberOfNodesMatchingFilter:(id)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)nodesForDomain:(unsigned short)arg1 properties:(id)arg2 ;
-(unsigned long long)nodesCountForDomain:(unsigned short)arg1 ;
-(id)nodesForDomains:(id)arg1 ;
-(id)addUniquelyIdentifiedNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(BOOL*)arg5 ;
-(unsigned long long)nodesCount;
-(id)nodesLabels;
-(id)nodesDomains;
-(void)enumerateNodesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateNodesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 ;
-(id)orphanNodes;
-(BOOL)edgesStoreWeakReferencesToNodes;
-(void)removeEdge:(id)arg1 ;
-(void)removeEdges:(id)arg1 ;
-(id)edgeForIdentifier:(unsigned)arg1 ;
-(id)edgesForIdentifiers:(id)arg1 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg1 ;
-(id)edgesMatchingFilter:(id)arg1 ;
-(unsigned long long)numberOfEdgesMatchingFilter:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)edgesForDomain:(unsigned short)arg1 ;
-(unsigned long long)edgesCountForDomain:(unsigned short)arg1 ;
-(id)edgesForDomains:(id)arg1 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 ;
-(id)edgesLabels;
-(id)edgesDomains;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(void)enumerateEdgesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateEdgesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesRelatedToNodeWithIdentifier:(unsigned)arg1 withRelation:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)nodeIdentifiersRelatedToSourceNodeIdentifiers:(id)arg1 relation:(id)arg2 ;
-(unsigned long long)countOfNodesRelatedToNodesWithIdentifiers:(id)arg1 relation:(id)arg2 ;
-(void)writeUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasPendingWrite;
-(void)waitUntilQuiescentUsingBlock:(/*^block*/id)arg1 ;
-(void)savePersistentStoreWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)savePersistentStore;
-(BOOL)migratePersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)copyPersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forNodeWithIdentifier:(unsigned)arg3 ;
-(void)persistModelProperties:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 clobberExisting:(BOOL)arg3 ;
-(void)removeModelPropertyForKey:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(void)removeModelPropertiesForNodeWithIdentifier:(unsigned)arg1 ;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forEdgeWithIdentifier:(unsigned)arg3 ;
-(void)persistModelProperties:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 clobberExisting:(BOOL)arg3 ;
-(void)removeModelPropertyForKey:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(void)removeModelPropertiesForEdgeWithIdentifier:(unsigned)arg1 ;
-(void)persistWeight:(float)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(void)persistWeight:(float)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(BOOL)compareWithPersistedState;
-(id)nodeFromFetchedRowWithIdentifier:(int)arg1 domain:(short)arg2 label:(id)arg3 weight:(float)arg4 ;
-(id)edgeFromFetchedRowWithIdentifier:(int)arg1 domain:(short)arg2 label:(id)arg3 weight:(float)arg4 sourceNodeIdentifier:(int)arg5 targetNodeIdentifier:(int)arg6 ;
-(void)loadDomains:(id)arg1 ;
-(void)unloadDomains:(id)arg1 ;
-(id)initWithSpecification:(id)arg1 persistenceStoreURL:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)unloadEdge:(id)arg1 ;
-(void)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 saveToDatabase:(BOOL)arg4 createdNodes:(out id*)arg5 createdEdges:(out id*)arg6 ;
-(void)_loadWithGraphJSONDictionary:(id)arg1 ;
-(id)initWithSpecification:(id)arg1 dataURL:(id)arg2 ;
-(id)initWithGraphMLURL:(id)arg1 ;
-(id)initWithGraphJSONURL:(id)arg1 ;
-(id)_graphJSONDictionary;
-(void)_loadWithGraphDictionary:(id)arg1 ;
-(void)_prepareFragmentedIdentifiers;
-(unsigned)_nextNodeIdentifier;
-(unsigned)_nextEdgeIdentifier;
-(unsigned)lastNodeIdentifier;
-(unsigned)lastEdgeIdentifier;
-(void)_addNode:(id)arg1 withIdentifier:(unsigned)arg2 saveToDatabase:(BOOL)arg3 ;
-(id)_addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 saveToDatabase:(BOOL)arg5 ;
-(id)_addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 identifier:(unsigned)arg5 saveToDatabase:(BOOL)arg6 ;
-(id)_addNodeFromBase:(id)arg1 saveToDatabase:(BOOL)arg2 ;
-(id)_removeMemoryNodes:(id)arg1 ;
-(id)_removeMemoryNode:(id)arg1 ;
-(id)_allNodes;
-(id)_nodesForLabel:(id)arg1 ;
-(id)_nodesForDomain:(unsigned long long)arg1 ;
-(id)_addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 saveToDatabase:(BOOL)arg7 ;
-(id)_addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 identifier:(unsigned)arg7 saveToDatabase:(BOOL)arg8 ;
-(id)_addEdgeFromBase:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 saveToDatabase:(BOOL)arg4 ;
-(void)_removeMemoryEdge:(id)arg1 ;
-(void)_removeMemoryEdges:(id)arg1 ;
-(id)_allEdges;
-(id)_edgesForLabel:(id)arg1 ;
-(id)_edgesForDomain:(unsigned long long)arg1 ;
-(void)_addEdge:(id)arg1 withIdentifier:(unsigned)arg2 saveToDatabase:(BOOL)arg3 ;
@end

