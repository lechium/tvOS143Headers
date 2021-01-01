/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PSSpecifier, NSString, NSURL, NSArray, NSMutableSet, NSMutableArray, PSSpecifierAction;

@interface PSSearchEntry : NSObject {

	PSSpecifier* _specifier;
	NSString* _name;
	NSURL* _url;
	BOOL _isRootURL;
	NSString* _identifier;
	NSString* _sectionIdentifier;
	BOOL _isSection;
	BOOL _hasDetailController;
	BOOL _hasListController;
	NSArray* _additionalDetailTextComponents;
	PSSearchEntry* _parentEntry;
	NSMutableSet* _childEntries;
	NSString* _groupName;
	NSString* _plistName;
	NSString* _bundleName;
	NSString* _manifestBundleName;
	NSMutableArray* _keywords;
	PSSpecifierAction* _action;
	PSSpecifier* _groupSpecifier;

}

@property (nonatomic,readonly) PSSpecifier * specifier;                        //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * groupSpecifier;                     //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (assign,nonatomic,__weak) PSSearchEntry * parentEntry;               //@synthesize parentEntry=_parentEntry - In the implementation block
@property (nonatomic,readonly) NSMutableSet * childEntries;                    //@synthesize childEntries=_childEntries - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSString * sectionIdentifier;              //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isRootURL;                                 //@synthesize isRootURL=_isRootURL - In the implementation block
@property (nonatomic,copy) NSString * groupName;                               //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSString * plistName;                               //@synthesize plistName=_plistName - In the implementation block
@property (nonatomic,copy) NSString * bundleName;                              //@synthesize bundleName=_bundleName - In the implementation block
@property (nonatomic,copy) NSString * manifestBundleName;                      //@synthesize manifestBundleName=_manifestBundleName - In the implementation block
@property (nonatomic,readonly) NSMutableArray * keywords;                      //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,retain) PSSpecifierAction * action;                       //@synthesize action=_action - In the implementation block
+(id)schemeNameOverride;
+(void)setSchemeNameOverride:(id)arg1 ;
-(NSString *)name;
-(id)debugDescription;
-(id)description;
-(NSString *)identifier;
-(NSURL *)url;
-(PSSpecifier *)specifier;
-(NSMutableArray *)keywords;
-(PSSpecifierAction *)action;
-(void)setAction:(PSSpecifierAction *)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(NSString *)bundleName;
-(id)recursiveDescription;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(PSSpecifier *)groupSpecifier;
-(NSMutableSet *)childEntries;
-(id)rootEntry;
-(BOOL)isSectionEntry;
-(id)sectionEntry;
-(BOOL)hasListController;
-(BOOL)finishIndexing;
-(BOOL)isRootEntry;
-(NSString *)sectionIdentifier;
-(PSSearchEntry *)parentEntry;
-(id)ancestorEntries;
-(NSString *)plistName;
-(id)initWithSpecifier:(id)arg1 parent:(id)arg2 ;
-(void)setPlistName:(NSString *)arg1 ;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)setManifestBundleName:(NSString *)arg1 ;
-(BOOL)isRootURL;
-(id)detailTextWithEffectiveTitle:(id*)arg1 ;
-(BOOL)_specifier:(id)arg1 hasDetailController:(BOOL)arg2 ;
-(BOOL)hasFinishedIndexing;
-(id)_prefsURLIsRoot:(BOOL*)arg1 ;
-(BOOL)hasDetailController;
-(id)hierarchyDescription;
-(id)recursiveDescriptionForLevel:(unsigned long long)arg1 ;
-(BOOL)isRootUrl;
-(void)setParentEntry:(PSSearchEntry *)arg1 ;
-(NSString *)manifestBundleName;
@end

