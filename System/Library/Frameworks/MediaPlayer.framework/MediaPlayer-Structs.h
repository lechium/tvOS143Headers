/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct {
	unsigned initialized : 1;
	unsigned itemType : 1;
	unsigned detailedItemType : 1;
	unsigned artist : 1;
	unsigned album : 1;
	unsigned curator : 1;
	unsigned episode : 1;
	unsigned movie : 1;
	unsigned playlist : 1;
	unsigned radioStation : 1;
	unsigned socialPerson : 1;
	unsigned song : 1;
	unsigned season : 1;
	unsigned show : 1;
	unsigned showCreator : 1;
	unsigned aucType : 1;
} SCD_Struct_MP0;

typedef struct _NSZone* NSZoneRef;

typedef struct shared_ptr<mlcore::DeviceLibraryView> {
	DeviceLibraryView __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<mlcore::DeviceLibraryView>;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_MP3;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_MP5;

typedef struct OpaqueCMTimebase* OpaqueCMTimebaseRef;

typedef struct shared_ptr<mlcore::Query> {
	Query __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<mlcore::Query>;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct {
	unsigned initialized : 1;
	unsigned beats1 : 1;
	unsigned name : 1;
	unsigned editorNotes : 1;
	unsigned shortEditorNotes : 1;
	unsigned explicit : 1;
	unsigned type : 1;
	unsigned artwork : 1;
	unsigned stationGlyph : 1;
	unsigned attributionLabel : 1;
	unsigned providerName : 1;
	unsigned live : 1;
} SCD_Struct_MP9;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct _MRSystemAppPlaybackQueue* MRSystemAppPlaybackQueueRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	unsigned initialized : 1;
	unsigned title : 1;
	unsigned type : 1;
	unsigned loadAdditionalContentURL : 1;
	unsigned previouslyRetrievedNestedResponse : 1;
	unsigned uniformContentItemType : 1;
	unsigned memberOfChartSet : 1;
	unsigned displaysAsGridCellInCarPlay : 1;
	unsigned brick : 1;
} SCD_Struct_MP13;

typedef struct {
	unsigned identifiers : 1;
	unsigned name : 1;
} SCD_Struct_MP14;

typedef struct {
	unsigned initialized : 1;
	unsigned copyrightText : 1;
	unsigned title : 1;
	unsigned trackCount : 1;
	unsigned maximumItemTrackNumber : 1;
	unsigned discCount : 1;
	unsigned hasCleanContent : 1;
	unsigned hasExplicitContent : 1;
	unsigned libraryAdded : 1;
	unsigned keepLocalEnableState : 1;
	unsigned keepLocalManagedStatus : 1;
	unsigned libraryAddEligible : 1;
	unsigned compilation : 1;
	unsigned classical : 1;
	unsigned releaseDate : 1;
	unsigned artwork : 1;
	unsigned year : 1;
	unsigned preorder : 1;
	unsigned editorNotes : 1;
	unsigned shortEditorNotes : 1;
	unsigned volumeNormalization : 1;
	unsigned songPopularity : 1;
	unsigned representativeSong : 1;
	SCD_Struct_MP14 artist;
	SCD_Struct_MP14 genre;
} SCD_Struct_MP15;

typedef struct shared_ptr<mlcore::LocalizedSearchScope> {
	LocalizedSearchScope __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<mlcore::LocalizedSearchScope>;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct shared_ptr<mlcore::EntityQuery> {
	EntityQuery __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<mlcore::EntityQuery>;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	BOOL field5;
	BOOL field6;
	BOOL field7;
	BOOL field8;
	long long field9;
} SCD_Struct_MP19;

typedef struct _compressed_pair<long long *, std::__1::allocator<long long> > {
	long long __value_;
} compressed_pair<long long *, std::__1::allocator<long long> >;

typedef struct vector<long long, std::__1::allocator<long long> > {
	long long __begin_;
	long long __end_;
	compressed_pair<long long *, std::__1::allocator<long long> > __end_cap_;
} vector<long long, std::__1::allocator<long long> >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, unsigned long>, std::__1::less<long long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, unsigned long>, std::__1::less<long long>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, unsigned long>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, unsigned long>, void *> > >;

typedef struct _tree<std::__1::__value_type<long long, unsigned long>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, unsigned long>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, unsigned long> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, unsigned long>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, unsigned long>, std::__1::less<long long>, true> > __pair3_;
} tree<std::__1::__value_type<long long, unsigned long>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, unsigned long>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, unsigned long> > >;

typedef struct map<long long, unsigned long, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, unsigned long> > > {
	tree<std::__1::__value_type<long long, unsigned long>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, unsigned long>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, unsigned long> > > __tree_;
} map<long long, unsigned long, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, unsigned long> > >;

typedef struct shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > > {
	vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > >;

typedef struct shared_ptr<mlcore::EntityQueryResult> {
	EntityQueryResult __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<mlcore::EntityQueryResult>;

typedef struct shared_ptr<mlcore::DeviceLibrary> {
	DeviceLibrary __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<mlcore::DeviceLibrary>;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, void *> > >;

typedef struct _tree<std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__1::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, true>, std::__1::allocator<std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, true> > __pair3_;
} tree<std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__1::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, true>, std::__1::allocator<std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long> > >;

typedef struct map<MPModelStoreBrowseDetailedContentItemType, unsigned long, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, std::__1::allocator<std::__1::pair<const MPModelStoreBrowseDetailedContentItemType, unsigned long> > > {
	tree<std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__1::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, true>, std::__1::allocator<std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long> > > __tree_;
} map<MPModelStoreBrowseDetailedContentItemType, unsigned long, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, std::__1::allocator<std::__1::pair<const MPModelStoreBrowseDetailedContentItemType, unsigned long> > >;

typedef struct {
	unsigned identifiers : 1;
	unsigned name : 1;
	unsigned handle : 1;
} SCD_Struct_MP34;

typedef struct {
	unsigned initialized : 1;
	unsigned name : 1;
	unsigned trackCount : 1;
	unsigned editorNotes : 1;
	unsigned shortEditorNotes : 1;
	unsigned releaseDate : 1;
	unsigned lastModifiedDate : 1;
	unsigned artwork : 1;
	unsigned editorialArtwork : 1;
	unsigned tracksTiledArtwork : 1;
	unsigned hasCleanContent : 1;
	unsigned hasExplicitContent : 1;
	unsigned type : 1;
	unsigned libraryAdded : 1;
	unsigned keepLocalEnableState : 1;
	unsigned keepLocalManagedStatus : 1;
	unsigned curatorPlaylist : 1;
	unsigned owner : 1;
	unsigned publicPlaylist : 1;
	unsigned visiblePlaylist : 1;
	unsigned subscribed : 1;
	unsigned userEditableComponents : 1;
	unsigned shareURL : 1;
	unsigned shareShortURL : 1;
	unsigned descriptionText : 1;
	unsigned cloudVersionHash : 1;
	SCD_Struct_MP34 curator;
} SCD_Struct_MP35;

typedef struct {
	unsigned identifiers : 1;
	unsigned duration : 1;
	unsigned flavorType : 1;
	unsigned mediaType : 1;
	unsigned url : 1;
} SCD_Struct_MP36;

typedef struct {
	unsigned initialized : 1;
	unsigned title : 1;
	unsigned previewArtwork : 1;
	SCD_Struct_MP36 staticAssets;
} SCD_Struct_MP37;

typedef struct MPLibraryActiveKeepLocalStatus {
	long long statusType;
	double downloadProgress;
} MPLibraryActiveKeepLocalStatus;

typedef struct {
	unsigned initialized : 1;
	unsigned name : 1;
	unsigned hasBiography : 1;
	unsigned hasSocialPosts : 1;
	unsigned artwork : 1;
	unsigned editorialArtwork : 1;
	SCD_Struct_MP14 genre;
} SCD_Struct_MP39;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct _compressed_pair<long *, std::__1::allocator<long> > {
	long long __value_;
} compressed_pair<long *, std::__1::allocator<long> >;

typedef struct vector<long, std::__1::allocator<long> > {
	long long __begin_;
	long long __end_;
	compressed_pair<long *, std::__1::allocator<long> > __end_cap_;
} vector<long, std::__1::allocator<long> >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, MPIdentifierSet *>, std::__1::less<long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, MPIdentifierSet *>, std::__1::less<long>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, MPIdentifierSet *>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, MPIdentifierSet *>, void *> > >;

typedef struct _tree<std::__1::__value_type<long, MPIdentifierSet *>, std::__1::__map_value_compare<long, std::__1::__value_type<long, MPIdentifierSet *>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, MPIdentifierSet *> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, MPIdentifierSet *>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, MPIdentifierSet *>, std::__1::less<long>, true> > __pair3_;
} tree<std::__1::__value_type<long, MPIdentifierSet *>, std::__1::__map_value_compare<long, std::__1::__value_type<long, MPIdentifierSet *>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, MPIdentifierSet *> > >;

typedef struct map<long, MPIdentifierSet *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MPIdentifierSet *> > > {
	tree<std::__1::__value_type<long, MPIdentifierSet *>, std::__1::__map_value_compare<long, std::__1::__value_type<long, MPIdentifierSet *>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, MPIdentifierSet *> > > __tree_;
} map<long, MPIdentifierSet *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MPIdentifierSet *> > >;

typedef struct {
	unsigned identifiers : 1;
	unsigned title : 1;
	unsigned releaseDate : 1;
	unsigned year : 1;
	unsigned artist : 1;
	unsigned trackCount : 1;
} SCD_Struct_MP47;

typedef struct {
	unsigned identifiers : 1;
} SCD_Struct_MP48;

typedef struct {
	unsigned identifiers : 1;
	unsigned text : 1;
	unsigned hasStoreLyrics : 1;
	unsigned hasTimeSyncedLyrics : 1;
} SCD_Struct_MP49;

typedef struct {
	unsigned initialized : 1;
	unsigned title : 1;
	unsigned duration : 1;
	unsigned trackCount : 1;
	unsigned trackNumber : 1;
	unsigned discNumber : 1;
	unsigned grouping : 1;
	unsigned explicit : 1;
	unsigned artistUploadedContent : 1;
	unsigned hasVideo : 1;
	unsigned artwork : 1;
	unsigned copyrightText : 1;
	unsigned keepLocalEnableState : 1;
	unsigned keepLocalManagedStatus : 1;
	unsigned hasCloudSyncSource : 1;
	unsigned localFileAsset : 1;
	unsigned libraryAdded : 1;
	unsigned libraryAddEligible : 1;
	unsigned shouldShowComposer : 1;
	unsigned volumeNormalization : 1;
	unsigned year : 1;
	unsigned userRating : 1;
	unsigned cloudStatus : 1;
	unsigned gaplessInfo : 1;
	unsigned volumeAdjustment : 1;
	unsigned classicalWork : 1;
	unsigned classicalMovement : 1;
	unsigned classicalMovementCount : 1;
	unsigned classicalMovementNumber : 1;
	SCD_Struct_MP47 album;
	SCD_Struct_MP14 artist;
	SCD_Struct_MP14 composer;
	SCD_Struct_MP14 genre;
	SCD_Struct_MP48 homeSharingAsset;
	SCD_Struct_MP49 lyrics;
} SCD_Struct_MP50;

typedef struct shared_ptr<std::__1::map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > > {
	map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<std::__1::map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > >;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _compressed_pair<std::__1::shared_ptr<mlcore::EntityCache> *, std::__1::allocator<std::__1::shared_ptr<mlcore::EntityCache> > > {
	shared_ptr<mlcore::EntityCache> __value_;
} compressed_pair<std::__1::shared_ptr<mlcore::EntityCache> *, std::__1::allocator<std::__1::shared_ptr<mlcore::EntityCache> > >;

typedef struct vector<std::__1::shared_ptr<mlcore::EntityCache>, std::__1::allocator<std::__1::shared_ptr<mlcore::EntityCache> > > {
	shared_ptr<mlcore::EntityCache> __begin_;
	shared_ptr<mlcore::EntityCache> __end_;
	compressed_pair<std::__1::shared_ptr<mlcore::EntityCache> *, std::__1::allocator<std::__1::shared_ptr<mlcore::EntityCache> > > __end_cap_;
} vector<std::__1::shared_ptr<mlcore::EntityCache>, std::__1::allocator<std::__1::shared_ptr<mlcore::EntityCache> > >;

typedef struct shared_ptr<mlcore::LocalizedSearchQuery> {
	LocalizedSearchQuery __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<mlcore::LocalizedSearchQuery>;

typedef struct {
	unsigned initialized : 1;
	unsigned bookmarkTime : 1;
	unsigned shouldRememberBookmarkTime : 1;
	unsigned hasBeenPlayed : 1;
	unsigned startTime : 1;
	unsigned stopTime : 1;
	unsigned storeUbiquitousIdentifier : 1;
	unsigned userPlayCount : 1;
} SCD_Struct_MP56;

typedef struct {
	unsigned identifiers : 1;
	unsigned title : 1;
	SCD_Struct_MP34 showCreator;
} SCD_Struct_MP57;

typedef struct {
	unsigned identifiers : 1;
	unsigned number : 1;
	unsigned year : 1;
	SCD_Struct_MP57 show;
} SCD_Struct_MP58;

typedef struct {
	unsigned initialized : 1;
	unsigned title : 1;
	unsigned descriptionText : 1;
	unsigned duration : 1;
	unsigned artwork : 1;
	unsigned screenshotArtwork : 1;
	unsigned keepLocalEnableState : 1;
	unsigned keepLocalManagedStatus : 1;
	unsigned hasCloudSyncSource : 1;
	unsigned localFileAsset : 1;
	unsigned libraryAdded : 1;
	unsigned libraryAddEligible : 1;
	unsigned musicShow : 1;
	unsigned episodeNumber : 1;
	unsigned explicitRating : 1;
	SCD_Struct_MP58 season;
	SCD_Struct_MP57 show;
} SCD_Struct_MP59;

typedef struct _compressed_pair<int *, std::__1::allocator<int> > {
	int __value_;
} compressed_pair<int *, std::__1::allocator<int> >;

typedef struct vector<int, std::__1::allocator<int> > {
	int __begin_;
	int __end_;
	compressed_pair<int *, std::__1::allocator<int> > __end_cap_;
} vector<int, std::__1::allocator<int> >;

typedef struct __CFString* CFStringRef;

typedef struct {
	unsigned initialized : 1;
	unsigned endpointType : 1;
	unsigned redownloadParameters : 1;
	unsigned redownloadable : 1;
	unsigned accountIdentifier : 1;
	unsigned shouldReportPlayEvents : 1;
	unsigned subscriptionRequired : 1;
} SCD_Struct_MP63;

typedef struct MSVSignedRange {
	long long location;
	long long length;
} MSVSignedRange;

typedef struct {
	void createPlaybackQueue;
	void createContentItem;
	void createChildItem;
	void metadata;
	void artwork;
	void info;
	void languageOptions;
	void lyrics;
} SCD_Struct_MP65;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > {
	unsigned long long __value_;
} compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> >;

typedef struct vector<unsigned long long, std::__1::allocator<unsigned long long> > {
	unsigned long long __begin_;
	unsigned long long __end_;
	compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > __end_cap_;
} vector<unsigned long long, std::__1::allocator<unsigned long long> >;

typedef struct {
	BOOL isInitialized;
	BOOL itemType;
	BOOL url;
	BOOL backedByStoreItemMetadata;
	BOOL album;
	BOOL playlist;
	BOOL radioStation;
	BOOL subgroup;
} SCD_Struct_MP69;

typedef struct {
	int field1;
	int field2;
	int field3;
	int field4;
} SCD_Struct_MP70;

typedef struct MPLibraryAddStatusObserverConfiguration {
	BOOL isValidContentType;
	BOOL isLibraryAdded;
	BOOL hasCleanContent;
	BOOL hasExplicitContent;
	BOOL isLibraryAddEligible;
} MPLibraryAddStatusObserverConfiguration;

typedef struct {
	BOOL useCarPlayBrowseTopLevelContentOnly;
	BOOL useCarPlayBrowseTopLevelRequestReorderingHeuristics;
} SCD_Struct_MP72;

typedef struct {
	unsigned initialized : 1;
	unsigned title : 1;
	unsigned duration : 1;
	unsigned trackNumber : 1;
	unsigned trackCount : 1;
	unsigned discNumber : 1;
	unsigned grouping : 1;
	unsigned explicit : 1;
	unsigned artistUploadedContent : 1;
	unsigned hasVideo : 1;
	unsigned artwork : 1;
	unsigned copyrightText : 1;
	unsigned keepLocalEnableState : 1;
	unsigned keepLocalManagedStatus : 1;
	unsigned hasCloudSyncSource : 1;
	unsigned localFileAsset : 1;
	unsigned libraryAdded : 1;
	unsigned libraryAddEligible : 1;
	unsigned shouldShowComposer : 1;
	unsigned volumeNormalization : 1;
	unsigned year : 1;
	unsigned userRating : 1;
	unsigned cloudStatus : 1;
	unsigned gaplessInfo : 1;
	unsigned volumeAdjustment : 1;
	unsigned classicalWork : 1;
	unsigned classicalMovement : 1;
	unsigned classicalMovementCount : 1;
	unsigned classicalMovementNumber : 1;
	SCD_Struct_MP36 album;
	SCD_Struct_MP14 artist;
	SCD_Struct_MP14 composer;
	SCD_Struct_MP14 genre;
	SCD_Struct_MP48 homeSharingAsset;
	SCD_Struct_MP49 lyrics;
} SCD_Struct_MP73;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct {
	long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_MP77;

typedef struct shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > > {
	map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > >;

typedef struct {
	unsigned initialized : 1;
	unsigned title : 1;
	unsigned description : 1;
	unsigned duration : 1;
	unsigned releaseDate : 1;
	unsigned explicitRating : 1;
	unsigned tagline : 1;
	unsigned artwork : 1;
	unsigned editorialArtwork : 1;
	unsigned keepLocalEnableState : 1;
	unsigned keepLocalManagedStatus : 1;
	unsigned hasCloudSyncSource : 1;
	unsigned localFileAsset : 1;
	unsigned libraryAdded : 1;
	unsigned libraryAddEligible : 1;
} SCD_Struct_MP79;

