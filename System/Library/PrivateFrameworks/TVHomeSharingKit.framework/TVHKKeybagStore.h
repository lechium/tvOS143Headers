/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSTimer, NSOperationQueue, NSMutableDictionary;

@interface TVHKKeybagStore : NSObject {

	BOOL _haveRentalJournalCheckinsBeenAttempted;
	NSString* _rootPath;
	NSString* _keybagsPath;
	NSTimer* _keybagCleanUpTimer;
	NSOperationQueue* _rentalOperationQueue;
	NSMutableDictionary* _checkedOutRentals;
	NSString* _rentalJournalPath;

}

@property (nonatomic,copy) NSString * rootPath;                                        //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,copy) NSString * keybagsPath;                                     //@synthesize keybagsPath=_keybagsPath - In the implementation block
@property (nonatomic,retain) NSTimer * keybagCleanUpTimer;                             //@synthesize keybagCleanUpTimer=_keybagCleanUpTimer - In the implementation block
@property (nonatomic,retain) NSOperationQueue * rentalOperationQueue;                  //@synthesize rentalOperationQueue=_rentalOperationQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * checkedOutRentals;                  //@synthesize checkedOutRentals=_checkedOutRentals - In the implementation block
@property (nonatomic,retain) NSString * rentalJournalPath;                             //@synthesize rentalJournalPath=_rentalJournalPath - In the implementation block
@property (assign,nonatomic) BOOL haveRentalJournalCheckinsBeenAttempted;              //@synthesize haveRentalJournalCheckinsBeenAttempted=_haveRentalJournalCheckinsBeenAttempted - In the implementation block
+(id)sharedInstance;
+(void)_updateSentinelWithKeybagPath:(id)arg1 ;
+(void)_eraseKeybagAtPath:(id)arg1 ;
+(id)_rentalJournalEntryForRentalItem:(id)arg1 ;
+(void)initializeWithKeybagRootPath:(id)arg1 ;
-(id)new;
-(id)init;
-(NSString *)rootPath;
-(void)setRootPath:(NSString *)arg1 ;
-(id)_initWithKeybagRootPath:(id)arg1 ;
-(void)_eraseKeybags;
-(NSString *)keybagsPath;
-(id)keybagPathForMediaServerIdentifier:(id)arg1 ;
-(void)_addRentalJournalEntryForRentalItem:(id)arg1 ;
-(id)_checkoutRentalItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_checkinRentalItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_cleanupUnusedKeybagsTimerHandler;
-(void)_handleNetworkReachabilityDidChangeNotification:(id)arg1 ;
-(void)_checkinJournaledRentalsIfNecessary;
-(void)_removeRentalJournalEntryForRentalItem:(id)arg1 ;
-(NSOperationQueue *)rentalOperationQueue;
-(BOOL)haveRentalJournalCheckinsBeenAttempted;
-(void)_checkinJournaledRentals;
-(void)setHaveRentalJournalCheckinsBeenAttempted:(BOOL)arg1 ;
-(id)_readRentalJournal;
-(NSMutableDictionary *)checkedOutRentals;
-(void)_checkinRentalJournalEntry:(id)arg1 ;
-(void)_writeRentalJournal:(id)arg1 ;
-(NSString *)rentalJournalPath;
-(void)_eraseUnusedKeybags;
-(void)eraseKeybagStore;
-(void)updateKeybagKeepAliveForMediaServerIdentifier:(id)arg1 ;
-(id)checkoutRentalItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)checkinRentalItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setKeybagsPath:(NSString *)arg1 ;
-(NSTimer *)keybagCleanUpTimer;
-(void)setKeybagCleanUpTimer:(NSTimer *)arg1 ;
-(void)setRentalOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setCheckedOutRentals:(NSMutableDictionary *)arg1 ;
-(void)setRentalJournalPath:(NSString *)arg1 ;
@end

