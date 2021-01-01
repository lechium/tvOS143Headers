/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableOrderedSet, BMStreamMetadata, BMFrameStore;

@interface BMStreamDatastore : NSObject {

	unsigned long long _permission;
	unsigned long long _datastoreVersion;
	unsigned long long _maxFileSize;
	NSString* _streamPath;
	NSMutableOrderedSet* _segmentNames;
	BMStreamMetadata* _metadata;
	NSString* _streamId;
	BMFrameStore* _framesStore;

}

@property (nonatomic,retain) BMFrameStore * framesStore;              //@synthesize framesStore=_framesStore - In the implementation block
@property (nonatomic,readonly) NSString * streamId;                   //@synthesize streamId=_streamId - In the implementation block
+(id)newFileNameWithTimestamp:(double)arg1 ;
+(double)timestampWithFilename:(id)arg1 ;
+(long long)fileSizeOfURL:(id)arg1 ;
+(id)orderedSegmentsInDirectory:(id)arg1 includeZeroSizeSegments:(BOOL)arg2 ;
+(unsigned long long)indexOfSegmentContainingEventTime:(double)arg1 fromSegments:(id)arg2 ;
-(void)dealloc;
-(BOOL)saveMetadata:(id)arg1 ;
-(NSString *)streamId;
-(id)loadMetadata;
-(id)metadataPath;
-(id)copySegmentWithFilename:(id)arg1 error:(id*)arg2 ;
-(id)newFrameStoreOfSegmentContainingEventTime:(double)arg1 ;
-(BOOL)tryToAddTypeInfoToStoreEvent:(id)arg1 ;
-(void)nextEventFromFrameStore:(id)arg1 withOffset:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithStream:(id)arg1 permission:(unsigned long long)arg2 config:(id)arg3 ;
-(id)initWithStream:(id)arg1 streamPath:(id)arg2 permission:(unsigned long long)arg3 config:(id)arg4 ;
-(id)_localStreamPath;
-(void)setFramesStore:(BMFrameStore *)arg1 ;
-(BMFrameStore *)framesStore;
-(BOOL)writeEventWithEventBody:(id)arg1 timestamp:(double)arg2 ;
-(Class)eventClass;
-(BOOL)writeEventClass:(Class)arg1 ;
-(BOOL)writeEventData:(id)arg1 dataVersion:(unsigned)arg2 timestamp:(double)arg3 ;
-(void)fetchEventsFrom:(double)arg1 to:(double)arg2 callback:(/*^block*/id)arg3 ;
-(BOOL)updateWithNewSegmentNames;
-(BOOL)shouldRemoveEmptyFrameStoreFromSegmentName:(id)arg1 ;
-(void)enumerateSegmentsFrom:(double)arg1 to:(double)arg2 withBlock:(/*^block*/id)arg3 ;
-(BOOL)removeFrameStoreFileWithSegmentName:(id)arg1 ;
-(unsigned long long)streamSizeInBytes;
-(void)enumerateEventsFrom:(double)arg1 to:(double)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)newEnumeratorFromStartTime:(double)arg1 ;
-(BOOL)writeEventBytes:(const void*)arg1 length:(unsigned long long)arg2 dataVersion:(unsigned)arg3 timestamp:(double)arg4 ;
-(id)copySegmentAfterFrameStore:(id)arg1 createNewSegment:(BOOL)arg2 ;
-(long long)indexForFrameStoreAfterFrameStore:(id)arg1 ;
-(id)copyNextSegmentAfterIndex:(long long*)arg1 ;
-(id)filelockPath;
-(id)newFramestoreWithTime:(double)arg1 ;
-(id)initForReadingWithStream:(id)arg1 config:(id)arg2 ;
-(id)initForWritingWithStream:(id)arg1 config:(id)arg2 ;
-(id)initForPruningWithStream:(id)arg1 config:(id)arg2 ;
-(void)syncMappedFiles;
-(id)segmentNames;
-(BOOL)writeEventWithEventBody:(id)arg1 ;
-(id)fetchEventsFrom:(double)arg1 to:(double)arg2 ;
-(void)removeEventsFrom:(double)arg1 to:(double)arg2 pruneFutureEvents:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)pruneStreamToMaxStreamSizeInBytes:(unsigned long long)arg1 ;
-(void)eventsFrom:(double)arg1 to:(double)arg2 shouldDeleteUsingBlock:(/*^block*/id)arg3 ;
-(id)newEnumeratorFromBookmark:(id)arg1 ;
-(unsigned long long)maxFileSize;
@end
