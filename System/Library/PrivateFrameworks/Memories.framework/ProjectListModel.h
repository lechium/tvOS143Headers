/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CloudSynchDelegate;
@class NSMutableArray, NSMetadataQuery;

@interface ProjectListModel : NSObject {

	NSMutableArray* m_projects;
	NSMutableArray* m_iTunesSharedProjects;
	NSMutableArray* m_jailedProjects;
	NSMutableArray* m_unscannedMedia;
	NSMutableArray* _cloudDownloadsToRestart;
	id<CloudSynchDelegate> _cloudSynchDelegate;
	NSMetadataQuery* _ubiquitousQuery;
	NSMutableArray* _maybeInTheCloud;

}

@property (nonatomic,retain) NSMetadataQuery * ubiquitousQuery;                     //@synthesize ubiquitousQuery=_ubiquitousQuery - In the implementation block
@property (nonatomic,retain) NSMutableArray * maybeInTheCloud;                      //@synthesize maybeInTheCloud=_maybeInTheCloud - In the implementation block
@property (nonatomic,retain) NSMutableArray * cloudDownloadsToRestart;              //@synthesize cloudDownloadsToRestart=_cloudDownloadsToRestart - In the implementation block
@property (assign) id<CloudSynchDelegate> cloudSynchDelegate;                       //@synthesize cloudSynchDelegate=_cloudSynchDelegate - In the implementation block
+(id)sharedInstance;
+(id)unscannedMediaFromPaths:(id)arg1 ;
-(void)dealloc;
-(id)projects;
-(void)queryTheCloud;
-(id)projectPathsInDirectory:(id)arg1 otherPaths:(id*)arg2 ;
-(id)projectPathsInDirectory:(id)arg1 ;
-(NSMutableArray *)maybeInTheCloud;
-(void)removeQueryObservers;
-(id)projectPathsInPrivateDocumentsDirectory;
-(void)deleteProject:(id)arg1 ;
-(void)appendProject:(id)arg1 ;
-(NSMutableArray *)cloudDownloadsToRestart;
-(id)iTunesSharedProjects;
-(id)jailedProjects;
-(id)projectPathsInImportExportDirectoryAndOtherPaths:(id*)arg1 ;
-(void)appendJailedProject:(id)arg1 ;
-(void)appendiTunesSharedProject:(id)arg1 ;
-(void)unloadProjectAtIndex:(unsigned long long)arg1 ;
-(id<CloudSynchDelegate>)cloudSynchDelegate;
-(NSMetadataQuery *)ubiquitousQuery;
-(BOOL)moveSafeSaveProject:(id)arg1 ;
-(void)startCloudQuery;
-(void)addProject:(id)arg1 ;
-(id)projectWithPath:(id)arg1 ;
-(void)removeProject:(id)arg1 ;
-(void)stopCloudQuery;
-(void)skeletalProjectDidDownload:(id)arg1 ;
-(void)projectPathDidChange:(id)arg1 ;
-(void)addQueryObservers;
-(void)setUbiquitousQuery:(NSMetadataQuery *)arg1 ;
-(void)didStart:(id)arg1 ;
-(void)gathering:(id)arg1 ;
-(void)finishGathering:(id)arg1 ;
-(void)didUpdate:(id)arg1 ;
-(void)queueTrashOrphanedRenderedMovies;
-(id)pendingCloudProjectWithPath:(id)arg1 ;
-(void)trashOrphanedRenderedMovies;
-(void)noteApplicationWillTerminate:(id)arg1 ;
-(int)pendingCloudProjectsCount;
-(id)unscannedMedia;
-(void)createProjectPlaceholders;
-(void)loadProjectAtIndex:(unsigned long long)arg1 ;
-(void)unloadAllExceptProject:(id)arg1 ;
-(void)unloadProject:(id)arg1 ;
-(void)undeleteProject:(id)arg1 ;
-(void)deleteUneditedProject:(id)arg1 ;
-(void)duplicateProject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)moveJailedProjectToPrivateProject:(id)arg1 ;
-(id)placeHolderForProject:(id)arg1 ;
-(void)verifyCloudDownloads;
-(void)setCloudDownloadsToRestart:(NSMutableArray *)arg1 ;
-(void)setCloudSynchDelegate:(id<CloudSynchDelegate>)arg1 ;
-(void)setMaybeInTheCloud:(NSMutableArray *)arg1 ;
@end

