//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSongCellBaseController.h"

#import "CMScrollIndexBarDelegate.h"
#import "MCLoadMoreTableFooterViewDelegate.h"
#import "NM3DTouchProtocol.h"
#import "NMAddPlayListViewControllerProtocol.h"
#import "NMAddSongToPlayListViewDelegate.h"
#import "NMAvatarViewDelegate.h"
#import "NMContentOperBarDelegate.h"
#import "NMDelSongIoListManagerDelegate.h"
#import "NMHttpRequestDelegate.h"
#import "NMPlayAllSectionButtonDelegate.h"
#import "NMPlayListDelManagerDelegate.h"
#import "NMPlayListInfoCoverDelegate.h"
#import "NMPlaySourceViewControllerProtocol.h"
#import "NMPlaylistEditMenuDelegate.h"
#import "NMPlaylistEditOrderMenuDelegate.h"
#import "NMPlaylistManageOrderViewControllerDelegate.h"
#import "NMPlaylistManipulateDelegate.h"
#import "NMPlaylistPrivacyManagerDelegate.h"
#import "NMPlaylistSearchViewControllerDelegate.h"
#import "NMPlaylistSectionHeaderViewDelegate.h"
#import "NMPlaylistVoteViewDelegate.h"
#import "NMResourceCommentViewControllerDelegate.h"
#import "NMScreenShotProtocol.h"
#import "NMSongManageCellDelegate.h"
#import "NMSubscribeListManagerDelegate.h"
#import "NMTopListInfoViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MCSearchDisplayController, NMChangeSongOrderRequest, NMContainerViewController, NMIncrShareCountRequest, NMPlaylist, NMPlaylistDetailDynamicRequest, NMPlaylistDetailRequest, NMPlaylistDetailView, NMPlaylistEditMenu, NMPlaylistEditOrderMenu, NMPlaylistManipulateView, NMPlaylistNoContentGuideView, NMPlaylistSearchViewController, NMPlaylistSectionHeaderView, NMPlaylistSongPrivilegeRequest, NMPriorityApiRequestManager, NMResourceCommentViewController, NMSong, NMSongDetailRequest, NMSubscribersRequest, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIImage, UIPreviewAction;

@interface NMPlayListDetailViewController : NMSongCellBaseController <NMAvatarViewDelegate, NMPlaylistSectionHeaderViewDelegate, NMPlayListInfoCoverDelegate, NMPlayAllSectionButtonDelegate, NMContentOperBarDelegate, NMPlaylistEditMenuDelegate, NMSongManageCellDelegate, NMPlaylistManipulateDelegate, NMPlaylistPrivacyManagerDelegate, NMAddSongToPlayListViewDelegate, NMAddPlayListViewControllerProtocol, NMPlaylistEditOrderMenuDelegate, CMScrollIndexBarDelegate, NMPlaylistSearchViewControllerDelegate, NMResourceCommentViewControllerDelegate, MCLoadMoreTableFooterViewDelegate, NMTopListInfoViewDelegate, NMPlaylistVoteViewDelegate, NMPlaylistManageOrderViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, NMHttpRequestDelegate, NMDelSongIoListManagerDelegate, NMSubscribeListManagerDelegate, UIAlertViewDelegate, NMPlaySourceViewControllerProtocol, NMPlayListDelManagerDelegate, NM3DTouchProtocol, NMScreenShotProtocol>
{
    _Bool _isOwner;
    _Bool _underMultiple;
    NMPlaylist *_playlist;
    NSMutableArray *_songArray;
    NSMutableArray *_songIdArray;
    _Bool _isOffline;
    NSMutableArray *_subscribeArray;
    NSMutableArray *_tempSubUsers;
    _Bool _subscribed;
    _Bool _isWaitingSubResult;
    _Bool _viewDidLoad;
    _Bool _isLoading;
    _Bool _isLoadingMore;
    _Bool _detailTrigger;
    _Bool _shareButtonTrigger;
    _Bool _changeNotificationTrigger;
    _Bool _backing;
    _Bool _loadedFromDynamic;
    NMResourceCommentViewController *_resourceCommentController;
    NMContainerViewController *_commentContainerController;
    NMIncrShareCountRequest *_incrShareCountRequest;
    NMChangeSongOrderRequest *_changeSongOrderRequest;
    NMSongDetailRequest *_songRequest;
    NSMutableArray *_songRequestArray;
    _Bool _showFavMask;
    UIImage *_localImage;
    NMPlaylistDetailView *_playlistView;
    _Bool _loadThreadCancelled;
    _Bool _hasDownloadSong;
    NMPlaylistSectionHeaderView *_sectionHeaderView;
    NMPlaylistEditMenu *_playlistEditMenu;
    MCSearchDisplayController *_searchDisplayController;
    NMPlaylistSearchViewController *_searchViewController;
    NMPlaylistManipulateView *_manipulateView;
    NSMutableArray *_selectedSongArray;
    NMPlaylistEditOrderMenu *_editOrderMenu;
    unsigned long long _playlistDisplayOrder;
    NSMutableArray *_alphabetSongArray;
    NSMutableArray *_songIndexBarArray;
    NSMutableArray *_artistSongArray;
    NSMutableArray *_artistSongIndexBarArray;
    NSMutableArray *_albumSongArray;
    NSMutableArray *_albumSongIndexBarArray;
    NSMutableDictionary *_sectionIndexDic;
    _Bool _orderChanged;
    _Bool _needRefreshSongState;
    _Bool _playAfterLoad;
    CDUnknownBlockType _autoPlayBlock;
    _Bool _loadingAllSongs;
    double _startDragYOffset;
    NMPlaylistDetailRequest *_detailRequest;
    NMPlaylistDetailRequest *_nginxCacheDetailRequest;
    NMPlaylistSongPrivilegeRequest *_playlistSongPrivilegeRequest;
    NMPlaylistDetailDynamicRequest *_playlistDetailDynamicRequest;
    NMPriorityApiRequestManager *_priorityRequestsManager;
    NMSubscribersRequest *_subscribeUserRequest;
    NSMutableDictionary *_privilegesDict;
    _Bool _isHidingMessageView;
    NMPlaylistNoContentGuideView *_noContentView;
    _Bool _pushFromPlayView;
    NMSong *_currentSong;
    UIPreviewAction *_nm_addtionPreviewActionItem;
}

@property(retain, nonatomic) UIPreviewAction *nm_addtionPreviewActionItem; // @synthesize nm_addtionPreviewActionItem=_nm_addtionPreviewActionItem;
@property(retain, nonatomic) NMSong *currentSong; // @synthesize currentSong=_currentSong;
@property(nonatomic) _Bool loadingAllSongs; // @synthesize loadingAllSongs=_loadingAllSongs;
@property(nonatomic) _Bool pushFromPlayView; // @synthesize pushFromPlayView=_pushFromPlayView;
@property(readonly, nonatomic) NSMutableArray *songRequestArray; // @synthesize songRequestArray=_songRequestArray;
@property(readonly, nonatomic) NSMutableArray *songArray; // @synthesize songArray=_songArray;
@property(retain, nonatomic) NMPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (id)routeScheme;
- (void)playlistManageOrderViewController:(id)arg1 orderChangedSongs:(id)arg2 orderChangedSongIds:(id)arg3;
- (id)screenShotShareLink;
- (id)screenShotShareWords;
@property(readonly, nonatomic) NSDictionary *screenShotLogParams;
- (id)previewActionItems;
- (void)previewActionToGetComments;
- (void)previewActionToPlayAll;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)itemsFor3DTouch;
- (void)dealloc;
- (void)toplistInfoView:(id)arg1 infoClicked:(id)arg2;
- (void)playlistSearchViewController:(id)arg1 delSongInPlaylist:(id)arg2 songCount:(long long)arg3 cloudTrackCount:(long long)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)fixSearchBarPosition;
- (void)tableViewScrollStop;
- (void)tableViewScrollStart;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollIndexSelectionDidChange:(id)arg1 index:(int)arg2 title:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)failToActiveSearch;
- (void)doActiveSearch;
- (void)scrollTableView:(_Bool)arg1;
- (void)showSearchBarGuide;
- (void)generateAlbumViewDisplaySource;
- (void)generateArtistViewDisplaySource;
- (void)generateSongViewDisplaySource;
- (void)prepareAlphabetForSearch;
- (void)parseAlbumInitial:(id)arg1;
- (void)parseArtistInitial:(id)arg1;
- (void)parseSongInitial:(id)arg1;
- (void)prepareAlphabet;
- (_Bool)validOrderShowIndex;
- (void)changePlaylistOrder;
- (void)setupIndexArray;
- (void)generateThreeViewDataSource;
- (void)loadAndDisplayWithOrder:(unsigned long long)arg1;
- (void)playlistEditOrderMenuDidDismiss:(id)arg1;
- (void)playlistEditOrderMenuEnterAlbumOrder:(id)arg1;
- (void)playlistEditOrderMenuEnterArtistOrder:(id)arg1;
- (void)playlistEditOrderMenuEnterSongOrder:(id)arg1;
- (void)gotoManualOrderManage;
- (void)playlistEditOrderMenuEnterManualOrder:(id)arg1;
- (void)playlistEditOrderMenuEnterDefault:(id)arg1;
- (void)doOrderTo:(unsigned long long)arg1;
- (void)updateSelectedSong:(id)arg1 checked:(_Bool)arg2;
- (id)playlistCreatorIdForSongManageCell:(id)arg1;
- (void)songManageCell:(id)arg1 cellChecked:(_Bool)arg2;
- (void)onCheckBoxAll:(id)arg1;
- (void)delSongsInPlaylist:(id)arg1 needDeleteFile:(_Bool)arg2;
- (_Bool)hasDownloadSong:(id)arg1;
- (void)downloadButtonClicked:(id)arg1;
- (void)resetMultipleSelected;
- (void)deleteDownloadButtonClicked:(id)arg1;
- (void)addToPlaylistButtonClicked:(id)arg1;
- (void)removeFromPlaylistButtonClicked:(id)arg1;
- (void)playNextButtonClicked:(id)arg1;
- (void)checkSavePlaylistOrder;
- (void)checkChangeSongOrder;
- (void)addChangeOrderLog:(id)arg1;
- (void)exitMultiple;
- (void)resetForMultiple;
- (void)scrollsToTop;
- (void)alertLoadFail;
- (void)enterMultiple;
- (void)doEnterMultiple;
- (void)playlistEditMenu:(id)arg1 changeOrder:(id)arg2;
- (void)playlistEditMenu:(id)arg1 informPlaylist:(id)arg2;
- (void)playlistEditMenu:(id)arg1 clearDownload:(id)arg2;
- (void)playlistEditMenu:(id)arg1 publicPlaylistInfo:(id)arg2;
- (void)playlistEditMenu:(id)arg1 editPlaylistInfo:(id)arg2;
- (void)privateButtonClicked;
- (void)downloadButtonClicked;
- (void)shareButtonClicked;
- (void)commentButtonClicked;
- (void)subButtonClicked;
- (void)showPlayListInfoCoverWithPlayList:(id)arg1;
- (void)updateSongsAndPlaylistToDB;
- (void)updatePlaylistMetaToDB;
- (_Bool)needUpdateToDB;
- (void)setBottomMarginX;
- (void)clickSubscribeUser:(id)arg1;
- (void)refreshPlaylistInfo;
- (void)didTakePicture:(id)arg1;
- (void)playlistDownloadStatusDidLoad;
- (void)loadPlaylistDownloadStatus;
- (void)refreshTableView;
- (void)checkPlaylistHasDownload;
- (_Bool)shouldShowNetWorkTipViewForIOS10;
- (void)reachabilityChanged:(id)arg1;
- (void)unsubscribeFromNetworkReachabilityNotifications;
- (void)registerForNetworkReachabilityNotifications;
- (void)publicPlaylist;
- (void)shareSuccess:(id)arg1;
- (void)messageSendSuccess:(id)arg1;
- (void)coverImageButtonClicked:(id)arg1;
- (void)proceedDownload:(_Bool)arg1;
- (void)confirmDownloadIn2G3G:(_Bool)arg1;
- (void)triggerDownload;
- (void)authorButtonClicked;
- (void)avatarView:(id)arg1 avatarClicked:(id)arg2;
- (void)showPlayViewController;
- (void)willExitController;
- (void)navigationPopByGesture:(id)arg1;
- (void)moreButtonClicked:(id)arg1;
- (void)backAction:(id)arg1;
- (void)playlistVoteView:(id)arg1 willGotoVote:(id)arg2;
- (void)checkVoteEnable;
- (void)downloadCellSelected:(id)arg1;
- (void)addToPlaylistCellSelected:(id)arg1;
- (void)nextPlaySongCellSelected:(id)arg1;
- (void)deleteCellSelected:(id)arg1;
- (void)publicPlaylistDidFailed:(id)arg1;
- (void)publicPlaylistDidSuccess:(id)arg1;
- (void)addSongToNewPlaylistDidSuccess;
- (void)addSongToPlaylistDidSuccess;
- (void)addSongToPlayListView:(id)arg1 willShowNewPlaylistController:(id)arg2;
- (void)delSongInListDidSuccess:(id)arg1 songCount:(long long)arg2 cloudCount:(long long)arg3;
- (void)delSongInListDidFail:(id)arg1;
- (void)delPlayListDidSuccess:(id)arg1;
- (void)delPlayListDidFail:(id)arg1;
- (void)subscribeListDidFail:(id)arg1;
- (void)subscribeListDidSuccess:(id)arg1;
- (void)checkForPlayDirectly;
- (void)refreshViewAfterPlaylistSync:(_Bool)arg1;
- (void)requestFailed:(id)arg1;
- (void)refreshSong:(struct _NSRange)arg1 needHideSearch:(_Bool)arg2;
- (void)copyDownloadOrSearchData:(id)arg1 fromSong:(id)arg2;
- (void)refreshSongPrivileges:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)processFinishedPlaylistDynamicRequest:(id)arg1;
- (void)processFinishedPlaylistSongPrivilegeRequest:(id)arg1;
- (void)processFinishedDetailRequest:(id)arg1;
- (void)processFinishedPriorityRequests:(id)arg1 success:(_Bool)arg2;
- (void)refreshSubscribeUsers;
- (void)loadPlaylistDetail;
- (void)popupDeletePlaylistConfirmBox;
- (void)proceedUnsubPlaylist:(_Bool)arg1;
- (void)subPlaylistSong:(_Bool)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)popupDeleteConfirmBox:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)generateTrendInfo:(id)arg1 currentIndex:(long long)arg2;
- (id)generateCellForPlaylistOtherOrder:(id)arg1 indexPath:(id)arg2 dataSource:(id)arg3;
- (id)generateCellForPlaylistDefaultOrder:(id)arg1 indexPath:(id)arg2;
- (id)generateDefaultCell:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)needShowSubscribes;
- (void)processTableViewCellSelectedInOtherOrder:(id)arg1 indexPath:(id)arg2 dataSource:(id)arg3;
- (void)processTableViewCellSelectedInDefaultOrder:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)playlistInfoCover:(id)arg1 editButtonClicked:(id)arg2;
- (unsigned long long)playAllInternal;
- (void)playAllButtonClicked;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)mcLoadMoreTableFooterDataSourceIsLoading:(id)arg1;
- (void)mcLoadMoreTableFooterDidTriggerRefresh:(id)arg1;
- (void)updatePlaylistByStar;
- (void)playlistChangedNeedUpdate:(id)arg1;
- (void)playlistChanged:(id)arg1;
- (void)refreshDownloadStatus;
- (void)downloadChanged:(id)arg1;
- (void)tableReloadData:(id)arg1;
- (void)tableReloadData;
- (void)didReceiveMemoryWarning;
- (void)loadTopPlaylistAd;
- (void)updateDetailViewSubscribeState;
- (void)updateDetailViewSubscribeActivity:(_Bool)arg1;
- (void)tryToUpdateEssentialPlaylist:(id)arg1;
- (id)_getCurrentPlaylistForSong:(id)arg1;
- (void)toplistlog;
- (void)loadFromLocalDidFinish:(id)arg1;
- (void)loadFromLocal:(unsigned long long)arg1 needUpdateMyPl:(_Bool)arg2;
- (_Bool)allSongLoaded;
- (_Bool)loadAllData:(CDUnknownBlockType)arg1;
- (void)refreshSongsWithServer:(id)arg1 localSongs:(id)arg2 originalRange:(struct _NSRange)arg3 loadSongBlock:(CDUnknownBlockType)arg4;
- (void)loadmoreData:(id)arg1 loadSongBlock:(CDUnknownBlockType)arg2;
- (void)loadmoreData:(id)arg1;
- (void)sourceScrollToCurrentSong;
- (void)finishLoadData:(_Bool)arg1 scrollToCurrentSong:(_Bool)arg2;
- (void)enterOfflineMode:(id)arg1;
- (void)enterOnlineMode;
- (void)removeLoadSongCover;
- (void)showLoadSongCover;
- (void)viewDidUnload;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)handleSearchCancelButtonTextColor:(id)arg1;
- (void)loadView;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)refreshForVipStatusUpdated;
- (void)refreshDataForUMG;
- (id)indexBar;
- (id)tableView;
- (id)playlistView;
- (void)showRecommendation:(id)arg1;
- (_Bool)isEqualToSourceController:(id)arg1;
- (id)navigationTitle;
- (id)extraBIDescInfo;
- (id)initWithPlaylist:(id)arg1;
- (id)initWithId:(id)arg1 ownerId:(id)arg2 type:(unsigned long long)arg3 toplistType:(id)arg4 name:(id)arg5;
- (id)initWithId:(id)arg1 ownerId:(id)arg2 type:(unsigned long long)arg3 name:(id)arg4;
- (id)initWithId:(id)arg1 ownerId:(id)arg2 type:(unsigned long long)arg3;
- (id)initWithAutoPlay:(id)arg1 started:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool notNeedShowShareMenu;
@property(readonly) Class superclass;

@end

