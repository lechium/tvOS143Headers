/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ICNoteListSortUtilities : NSObject
+(id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)arg1 ;
+(long long)currentNoteListSortType;
+(id)sortDescriptorsForType:(long long)arg1 ascending:(BOOL)arg2 ;
+(id)legacySortDescriptorsForType:(long long)arg1 ascending:(BOOL)arg2 ;
+(id)sortDescriptorsForType:(long long)arg1 ;
+(id)sortDescriptorsForPinnedNotes;
+(long long)sortTypeForFolderNoteOrder:(unsigned long long)arg1 ;
+(long long)sortTypeForTag:(long long)arg1 ;
+(void)setCurrentNoteListSortType:(long long)arg1 ;
+(id)dateForCurrentSortTypeForNote:(id)arg1 ;
+(id)legacySortDescriptorsForType:(long long)arg1 ;
+(id)sortDescriptorsForCurrentType;
+(id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)arg1 folderNoteSortType:(id)arg2 ;
+(id)descriptionForNoteListSortType:(long long)arg1 ;
+(void)setCurrentNoteListSortTypeByTag:(long long)arg1 ;
+(BOOL)isMenuItemCurrentSortTypeForTag:(long long)arg1 ;
+(long long)tagForSortType:(long long)arg1 ;
+(id)dateForCurrentSortTypeAccessibilityStringForNote:(id)arg1 ;
@end

